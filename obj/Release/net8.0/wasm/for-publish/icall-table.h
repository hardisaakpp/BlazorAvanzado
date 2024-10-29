#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
223,
231,
232,
233,
234,
235,
236,
237,
239,
240,
288,
289,
290,
314,
315,
316,
328,
329,
330,
331,
418,
419,
420,
423,
455,
456,
458,
460,
462,
464,
469,
477,
478,
479,
480,
481,
482,
483,
484,
485,
565,
566,
618,
624,
627,
629,
634,
635,
637,
638,
642,
643,
645,
647,
648,
651,
652,
653,
656,
659,
661,
663,
672,
728,
730,
732,
742,
743,
744,
746,
752,
753,
754,
755,
756,
764,
765,
766,
770,
771,
773,
775,
965,
1113,
1114,
6565,
6566,
6568,
6569,
6570,
6571,
6572,
6574,
6576,
6578,
6579,
6587,
6589,
6594,
6596,
6598,
6600,
6651,
6652,
6654,
6655,
6656,
6657,
6658,
6660,
6662,
7565,
7569,
7571,
7572,
7573,
7574,
7768,
7769,
7770,
7771,
7787,
7788,
7789,
7791,
7833,
7892,
7894,
7903,
7904,
7905,
7906,
8323,
8327,
8328,
8354,
8371,
8378,
8385,
8396,
8399,
8419,
8490,
8492,
8501,
8503,
8504,
8511,
8525,
8545,
8546,
8554,
8556,
8563,
8564,
8567,
8569,
8574,
8580,
8581,
8588,
8590,
8602,
8605,
8606,
8607,
8618,
8627,
8633,
8634,
8635,
8637,
8638,
8655,
8657,
8671,
8688,
8715,
8740,
8741,
9159,
9242,
9243,
9387,
9388,
9392,
9395,
9457,
9929,
9930,
10375,
10385,
10934,
10955,
10957,
10959,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 223,
ves_icall_System_Array_InternalCreate,
// token 231,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 232,
ves_icall_System_Array_CanChangePrimitive,
// token 233,
ves_icall_System_Array_FastCopy,
// token 234,
ves_icall_System_Array_GetLengthInternal_raw,
// token 235,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 236,
ves_icall_System_Array_GetGenericValue_icall,
// token 237,
ves_icall_System_Array_GetValueImpl_raw,
// token 239,
ves_icall_System_Array_SetValueImpl_raw,
// token 240,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 288,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 289,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 290,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 314,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 315,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 316,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 328,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 329,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 330,
ves_icall_System_Enum_InternalGetCorElementType,
// token 331,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 418,
ves_icall_System_Environment_get_ProcessorCount,
// token 419,
ves_icall_System_Environment_get_TickCount,
// token 420,
ves_icall_System_Environment_get_TickCount64,
// token 423,
ves_icall_System_Environment_FailFast_raw,
// token 455,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 456,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 458,
ves_icall_System_GC_SuppressFinalize_raw,
// token 460,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 462,
ves_icall_System_GC_GetGCMemoryInfo,
// token 464,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 469,
ves_icall_System_Object_MemberwiseClone_raw,
// token 477,
ves_icall_System_Math_Ceiling,
// token 478,
ves_icall_System_Math_Cos,
// token 479,
ves_icall_System_Math_Floor,
// token 480,
ves_icall_System_Math_Log10,
// token 481,
ves_icall_System_Math_Pow,
// token 482,
ves_icall_System_Math_Sin,
// token 483,
ves_icall_System_Math_Sqrt,
// token 484,
ves_icall_System_Math_Tan,
// token 485,
ves_icall_System_Math_ModF,
// token 565,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 566,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 618,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 624,
ves_icall_RuntimeType_make_array_type_raw,
// token 627,
ves_icall_RuntimeType_make_byref_type_raw,
// token 629,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 634,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 635,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 637,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 638,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 642,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 643,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 645,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 647,
ves_icall_System_RuntimeType_getFullName_raw,
// token 648,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 651,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 652,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 653,
ves_icall_RuntimeType_GetFields_native_raw,
// token 656,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 659,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 661,
ves_icall_RuntimeType_GetName_raw,
// token 663,
ves_icall_RuntimeType_GetNamespace_raw,
// token 672,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 728,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 730,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 732,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 742,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 743,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 744,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 746,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 752,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 753,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 754,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 755,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 756,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 764,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 765,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 766,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 770,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 771,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 773,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 775,
ves_icall_System_String_FastAllocateString_raw,
// token 965,
ves_icall_System_Type_internal_from_handle_raw,
// token 1113,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1114,
ves_icall_System_ValueType_Equals_raw,
// token 6565,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6566,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6568,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6569,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6570,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6571,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6572,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6574,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6576,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6578,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6579,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6587,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6589,
mono_monitor_exit_icall_raw,
// token 6594,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6596,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6598,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6600,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6651,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6652,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6654,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6655,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6656,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6657,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6658,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6660,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6662,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7565,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7569,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7571,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7572,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7573,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7574,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7768,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7769,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7770,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7771,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7787,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7788,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7789,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7791,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7833,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7892,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7894,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7903,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7904,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7905,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7906,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8323,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8327,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8328,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8354,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8371,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8378,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8385,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8396,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8399,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8419,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8490,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8492,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8501,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8503,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8504,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8511,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8525,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8545,
ves_icall_reflection_get_token_raw,
// token 8546,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8554,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8556,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8563,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8564,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8567,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8569,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8574,
ves_icall_reflection_get_token_raw,
// token 8580,
ves_icall_get_method_info_raw,
// token 8581,
ves_icall_get_method_attributes,
// token 8588,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8590,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8602,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8605,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8606,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8607,
ves_icall_reflection_get_token_raw,
// token 8618,
ves_icall_InternalInvoke_raw,
// token 8627,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8633,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8634,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8635,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8637,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8638,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8655,
ves_icall_InvokeClassConstructor_raw,
// token 8657,
ves_icall_InternalInvoke_raw,
// token 8671,
ves_icall_reflection_get_token_raw,
// token 8688,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8715,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8740,
ves_icall_reflection_get_token_raw,
// token 8741,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9159,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9242,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9243,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9387,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9388,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9392,
ves_icall_ModuleBuilder_getToken_raw,
// token 9395,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9457,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9929,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9930,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10375,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10385,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10934,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10955,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10957,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10959,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
