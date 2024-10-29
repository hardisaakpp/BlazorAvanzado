using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using BlazorAvanzado;
using Microsoft.Extensions.Configuration;
using BlazorAvanzado.ViewModels; // Add this line for CounterViewModel
using BlazorAvanzado.Pages;
using BlazorAvanzado.Services;
using Blazored.Toast; // Add this line for WeatherForecastService

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");

builder.Logging.SetMinimumLevel(LogLevel.Critical);

builder.Services.AddBlazoredToast();

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
builder.Services.AddScoped<IWeatherForeCastService, WeatherForecastService>();
builder.Services.AddTransient(sp => new CounterViewModel());

builder.Configuration.AddJsonFile("appsettings.json", optional: false, reloadOnChange: true);
builder.RootComponents.Add<HeadOutlet>("head::after");

await builder.Build().RunAsync();
