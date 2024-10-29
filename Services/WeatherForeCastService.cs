using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Net.Http.Json;
using BlazorAvanzado.ViewModels;
using Microsoft.AspNetCore.Components;
using BlazorAvanzado.Models;

namespace BlazorAvanzado.Services 
{
    public class WeatherForecastService : IWeatherForeCastService
    {
        public HttpClient Http { get; set; }
        public WeatherForecastService(HttpClient http)
        {
            Http = http;
        }
        public async Task<WeatherForecast[]> Get()
        {
            return await Http.GetFromJsonAsync<WeatherForecast[]>("sample-data/weather.json");
        }
    }
}