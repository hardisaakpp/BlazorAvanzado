using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using  BlazorAvanzado.Models;

namespace BlazorAvanzado.Services
{
    public interface IWeatherForeCastService
    {
        Task<WeatherForecast[]> Get();
    }
}