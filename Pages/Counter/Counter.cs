using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using BlazorAvanzado.ViewModels;
using Blazored.Toast.Services;
using Microsoft.AspNetCore.Components;
using Microsoft.Extensions.Logging;

namespace BlazorAvanzado.Pages.Counter
{
    public partial class Counter : ComponentBase
    {
        [Inject]
        private ILogger<Counter>? logger { get; set; }

        [Inject]
        private CounterViewModel? vm { get; set; }
        [Inject]
        IToastService? toastService { get; set; }

        protected override void OnInitialized()
        {
            if (vm != null)
            {
                vm.currentCount = 0;
            }

            logger?.LogInformation("Iniciando componente");
            Console.WriteLine("Iniciando componente");
        }

        private void IncrementCount()
        {
            if (vm != null)
            {
                logger?.LogInformation($"Incrementando count en 1 {vm.currentCount}");
                vm.currentCount++;
                logger?.LogInformation($"Valor de count incrementado {vm.currentCount}");
                toastService?.ShowSuccess($"Dato incrementado {vm.currentCount}");
            }
        }
    }
}
