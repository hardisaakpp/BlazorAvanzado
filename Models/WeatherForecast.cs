using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using BlazorAvanzado.Models;

namespace BlazorAvanzado.Models
{
    public class WeatherForecast
    {
        public DateOnly Date { get; set; }

        public int TemperatureC { get; set; }

        public string? Summary { get; set; }

        public int TemperatureF => 32 + (int)(TemperatureC / 0.5556);
    }
}