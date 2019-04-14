#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t4271428238;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>
struct GeneratedBuilderLite_2_t3548493156;
// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct GeneratedBuilderLite_2_t3142848435;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t3221112298;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t757992097;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t2498581859;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_t294577696;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t3107168633;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t39404347;
// System.Collections.Generic.IComparer`1<System.String>
struct IComparer_1_t3101716168;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t3301955079;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t158247624;
// proto.PhoneEvent/Types/OrientationEvent/Builder
struct Builder_t2279437287;
// titleScript
struct titleScript_t2507487369;

extern RuntimeClass* Builder_t2279437287_il2cpp_TypeInfo_var;
extern RuntimeClass* ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var;
extern RuntimeClass* ICodedInputStream_t3221112298_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* OrientationEvent_t158247624_il2cpp_TypeInfo_var;
extern RuntimeClass* PhoneEvent_t3448566392_il2cpp_TypeInfo_var;
extern RuntimeClass* StringComparer_t3301955079_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_BinarySearch_TisString_t_m2519237149_RuntimeMethod_var;
extern const RuntimeMethod* Builder_MergeFrom_m160215804_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m1370005186_RuntimeMethod_var;
extern const RuntimeMethod* GeneratedBuilderLite_2_MergeFrom_m4038465069_RuntimeMethod_var;
extern const RuntimeMethod* GeneratedBuilderLite_2__ctor_m1251714133_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const uint32_t Builder_Clear_m1516654503_MetadataUsageId;
extern const uint32_t Builder_Clone_m3442298780_MetadataUsageId;
extern const uint32_t Builder_MergeFrom_m1018040705_MetadataUsageId;
extern const uint32_t Builder_MergeFrom_m160215804_MetadataUsageId;
extern const uint32_t Builder_MergeFrom_m3801718990_MetadataUsageId;
extern const uint32_t Builder_MergeFrom_m877028760_MetadataUsageId;
extern const uint32_t Builder_PrepareBuilder_m147557039_MetadataUsageId;
extern const uint32_t Builder__ctor_m3220974630_MetadataUsageId;
extern const uint32_t Builder__ctor_m3698740796_MetadataUsageId;
extern const uint32_t Builder_get_DefaultInstanceForType_m980516419_MetadataUsageId;
extern const uint32_t PhoneEvent__cctor_m3021104822_MetadataUsageId;
extern const uint32_t titleScript_Start_m633093313_MetadataUsageId;
extern const uint32_t titleScript_Update_m4116460205_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct UInt32U5BU5D_t2770800703;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ABSTRACTBUILDERLITE_2_T4034615238_H
#define ABSTRACTBUILDERLITE_2_T4034615238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  AbstractBuilderLite_2_t4034615238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTBUILDERLITE_2_T4034615238_H
#ifndef ABSTRACTMESSAGELITE_2_T1663706917_H
#define ABSTRACTMESSAGELITE_2_T1663706917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  AbstractMessageLite_2_t1663706917  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTMESSAGELITE_2_T1663706917_H
#ifndef EXTENSIONREGISTRY_T4271428238_H
#define EXTENSIONREGISTRY_T4271428238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.ExtensionRegistry
struct  ExtensionRegistry_t4271428238  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>> Google.ProtocolBuffers.ExtensionRegistry::extensionsByName
	Dictionary_2_t3107168633 * ___extensionsByName_1;
	// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite> Google.ProtocolBuffers.ExtensionRegistry::extensionsByNumber
	Dictionary_2_t294577696 * ___extensionsByNumber_2;
	// System.Boolean Google.ProtocolBuffers.ExtensionRegistry::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_extensionsByName_1() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238, ___extensionsByName_1)); }
	inline Dictionary_2_t3107168633 * get_extensionsByName_1() const { return ___extensionsByName_1; }
	inline Dictionary_2_t3107168633 ** get_address_of_extensionsByName_1() { return &___extensionsByName_1; }
	inline void set_extensionsByName_1(Dictionary_2_t3107168633 * value)
	{
		___extensionsByName_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionsByName_1), value);
	}

	inline static int32_t get_offset_of_extensionsByNumber_2() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238, ___extensionsByNumber_2)); }
	inline Dictionary_2_t294577696 * get_extensionsByNumber_2() const { return ___extensionsByNumber_2; }
	inline Dictionary_2_t294577696 ** get_address_of_extensionsByNumber_2() { return &___extensionsByNumber_2; }
	inline void set_extensionsByNumber_2(Dictionary_2_t294577696 * value)
	{
		___extensionsByNumber_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionsByNumber_2), value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct ExtensionRegistry_t4271428238_StaticFields
{
public:
	// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::empty
	ExtensionRegistry_t4271428238 * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ExtensionRegistry_t4271428238_StaticFields, ___empty_0)); }
	inline ExtensionRegistry_t4271428238 * get_empty_0() const { return ___empty_0; }
	inline ExtensionRegistry_t4271428238 ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ExtensionRegistry_t4271428238 * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONREGISTRY_T4271428238_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3301955079 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3301955079 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3301955079 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3301955079 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3301955079 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3301955079 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3301955079 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3301955079 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3301955079 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3301955079 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3301955079 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3301955079 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3301955079 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3301955079 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PHONEEVENT_T3448566392_H
#define PHONEEVENT_T3448566392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.Proto.PhoneEvent
struct  PhoneEvent_t3448566392  : public RuntimeObject
{
public:

public:
};

struct PhoneEvent_t3448566392_StaticFields
{
public:
	// System.Object proto.Proto.PhoneEvent::Descriptor
	RuntimeObject * ___Descriptor_0;

public:
	inline static int32_t get_offset_of_Descriptor_0() { return static_cast<int32_t>(offsetof(PhoneEvent_t3448566392_StaticFields, ___Descriptor_0)); }
	inline RuntimeObject * get_Descriptor_0() const { return ___Descriptor_0; }
	inline RuntimeObject ** get_address_of_Descriptor_0() { return &___Descriptor_0; }
	inline void set_Descriptor_0(RuntimeObject * value)
	{
		___Descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___Descriptor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHONEEVENT_T3448566392_H
#ifndef GENERATEDBUILDERLITE_2_T3142848435_H
#define GENERATEDBUILDERLITE_2_T3142848435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  GeneratedBuilderLite_2_t3142848435  : public AbstractBuilderLite_2_t4034615238
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBUILDERLITE_2_T3142848435_H
#ifndef GENERATEDMESSAGELITE_2_T3752983017_H
#define GENERATEDMESSAGELITE_2_T3752983017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.GeneratedMessageLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>
struct  GeneratedMessageLite_2_t3752983017  : public AbstractMessageLite_2_t1663706917
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDMESSAGELITE_2_T3752983017_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ORIENTATIONEVENT_T158247624_H
#define ORIENTATIONEVENT_T158247624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/OrientationEvent
struct  OrientationEvent_t158247624  : public GeneratedMessageLite_2_t3752983017
{
public:
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasTimestamp
	bool ___hasTimestamp_4;
	// System.Int64 proto.PhoneEvent/Types/OrientationEvent::timestamp_
	int64_t ___timestamp__5;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasX
	bool ___hasX_7;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::x_
	float ___x__8;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasY
	bool ___hasY_10;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::y_
	float ___y__11;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasZ
	bool ___hasZ_13;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::z_
	float ___z__14;
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent::hasW
	bool ___hasW_16;
	// System.Single proto.PhoneEvent/Types/OrientationEvent::w_
	float ___w__17;
	// System.Int32 proto.PhoneEvent/Types/OrientationEvent::memoizedSerializedSize
	int32_t ___memoizedSerializedSize_18;

public:
	inline static int32_t get_offset_of_hasTimestamp_4() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___hasTimestamp_4)); }
	inline bool get_hasTimestamp_4() const { return ___hasTimestamp_4; }
	inline bool* get_address_of_hasTimestamp_4() { return &___hasTimestamp_4; }
	inline void set_hasTimestamp_4(bool value)
	{
		___hasTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_timestamp__5() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___timestamp__5)); }
	inline int64_t get_timestamp__5() const { return ___timestamp__5; }
	inline int64_t* get_address_of_timestamp__5() { return &___timestamp__5; }
	inline void set_timestamp__5(int64_t value)
	{
		___timestamp__5 = value;
	}

	inline static int32_t get_offset_of_hasX_7() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___hasX_7)); }
	inline bool get_hasX_7() const { return ___hasX_7; }
	inline bool* get_address_of_hasX_7() { return &___hasX_7; }
	inline void set_hasX_7(bool value)
	{
		___hasX_7 = value;
	}

	inline static int32_t get_offset_of_x__8() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___x__8)); }
	inline float get_x__8() const { return ___x__8; }
	inline float* get_address_of_x__8() { return &___x__8; }
	inline void set_x__8(float value)
	{
		___x__8 = value;
	}

	inline static int32_t get_offset_of_hasY_10() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___hasY_10)); }
	inline bool get_hasY_10() const { return ___hasY_10; }
	inline bool* get_address_of_hasY_10() { return &___hasY_10; }
	inline void set_hasY_10(bool value)
	{
		___hasY_10 = value;
	}

	inline static int32_t get_offset_of_y__11() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___y__11)); }
	inline float get_y__11() const { return ___y__11; }
	inline float* get_address_of_y__11() { return &___y__11; }
	inline void set_y__11(float value)
	{
		___y__11 = value;
	}

	inline static int32_t get_offset_of_hasZ_13() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___hasZ_13)); }
	inline bool get_hasZ_13() const { return ___hasZ_13; }
	inline bool* get_address_of_hasZ_13() { return &___hasZ_13; }
	inline void set_hasZ_13(bool value)
	{
		___hasZ_13 = value;
	}

	inline static int32_t get_offset_of_z__14() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___z__14)); }
	inline float get_z__14() const { return ___z__14; }
	inline float* get_address_of_z__14() { return &___z__14; }
	inline void set_z__14(float value)
	{
		___z__14 = value;
	}

	inline static int32_t get_offset_of_hasW_16() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___hasW_16)); }
	inline bool get_hasW_16() const { return ___hasW_16; }
	inline bool* get_address_of_hasW_16() { return &___hasW_16; }
	inline void set_hasW_16(bool value)
	{
		___hasW_16 = value;
	}

	inline static int32_t get_offset_of_w__17() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___w__17)); }
	inline float get_w__17() const { return ___w__17; }
	inline float* get_address_of_w__17() { return &___w__17; }
	inline void set_w__17(float value)
	{
		___w__17 = value;
	}

	inline static int32_t get_offset_of_memoizedSerializedSize_18() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624, ___memoizedSerializedSize_18)); }
	inline int32_t get_memoizedSerializedSize_18() const { return ___memoizedSerializedSize_18; }
	inline int32_t* get_address_of_memoizedSerializedSize_18() { return &___memoizedSerializedSize_18; }
	inline void set_memoizedSerializedSize_18(int32_t value)
	{
		___memoizedSerializedSize_18 = value;
	}
};

struct OrientationEvent_t158247624_StaticFields
{
public:
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::defaultInstance
	OrientationEvent_t158247624 * ___defaultInstance_0;
	// System.String[] proto.PhoneEvent/Types/OrientationEvent::_orientationEventFieldNames
	StringU5BU5D_t1281789340* ____orientationEventFieldNames_1;
	// System.UInt32[] proto.PhoneEvent/Types/OrientationEvent::_orientationEventFieldTags
	UInt32U5BU5D_t2770800703* ____orientationEventFieldTags_2;

public:
	inline static int32_t get_offset_of_defaultInstance_0() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624_StaticFields, ___defaultInstance_0)); }
	inline OrientationEvent_t158247624 * get_defaultInstance_0() const { return ___defaultInstance_0; }
	inline OrientationEvent_t158247624 ** get_address_of_defaultInstance_0() { return &___defaultInstance_0; }
	inline void set_defaultInstance_0(OrientationEvent_t158247624 * value)
	{
		___defaultInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultInstance_0), value);
	}

	inline static int32_t get_offset_of__orientationEventFieldNames_1() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624_StaticFields, ____orientationEventFieldNames_1)); }
	inline StringU5BU5D_t1281789340* get__orientationEventFieldNames_1() const { return ____orientationEventFieldNames_1; }
	inline StringU5BU5D_t1281789340** get_address_of__orientationEventFieldNames_1() { return &____orientationEventFieldNames_1; }
	inline void set__orientationEventFieldNames_1(StringU5BU5D_t1281789340* value)
	{
		____orientationEventFieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&____orientationEventFieldNames_1), value);
	}

	inline static int32_t get_offset_of__orientationEventFieldTags_2() { return static_cast<int32_t>(offsetof(OrientationEvent_t158247624_StaticFields, ____orientationEventFieldTags_2)); }
	inline UInt32U5BU5D_t2770800703* get__orientationEventFieldTags_2() const { return ____orientationEventFieldTags_2; }
	inline UInt32U5BU5D_t2770800703** get_address_of__orientationEventFieldTags_2() { return &____orientationEventFieldTags_2; }
	inline void set__orientationEventFieldTags_2(UInt32U5BU5D_t2770800703* value)
	{
		____orientationEventFieldTags_2 = value;
		Il2CppCodeGenWriteBarrier((&____orientationEventFieldTags_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATIONEVENT_T158247624_H
#ifndef BUILDER_T2279437287_H
#define BUILDER_T2279437287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/OrientationEvent/Builder
struct  Builder_t2279437287  : public GeneratedBuilderLite_2_t3142848435
{
public:
	// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::resultIsReadOnly
	bool ___resultIsReadOnly_0;
	// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::result
	OrientationEvent_t158247624 * ___result_1;

public:
	inline static int32_t get_offset_of_resultIsReadOnly_0() { return static_cast<int32_t>(offsetof(Builder_t2279437287, ___resultIsReadOnly_0)); }
	inline bool get_resultIsReadOnly_0() const { return ___resultIsReadOnly_0; }
	inline bool* get_address_of_resultIsReadOnly_0() { return &___resultIsReadOnly_0; }
	inline void set_resultIsReadOnly_0(bool value)
	{
		___resultIsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(Builder_t2279437287, ___result_1)); }
	inline OrientationEvent_t158247624 * get_result_1() const { return ___result_1; }
	inline OrientationEvent_t158247624 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(OrientationEvent_t158247624 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((&___result_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUILDER_T2279437287_H
#ifndef TYPE_T1244512943_H
#define TYPE_T1244512943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// proto.PhoneEvent/Types/Type
struct  Type_t1244512943 
{
public:
	// System.Int32 proto.PhoneEvent/Types/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1244512943, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1244512943_H
#ifndef INVALIDPROTOCOLBUFFEREXCEPTION_T2498581859_H
#define INVALIDPROTOCOLBUFFEREXCEPTION_T2498581859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.ProtocolBuffers.InvalidProtocolBufferException
struct  InvalidProtocolBufferException_t2498581859  : public IOException_t4088381929
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROTOCOLBUFFEREXCEPTION_T2498581859_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef TITLESCRIPT_T2507487369_H
#define TITLESCRIPT_T2507487369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// titleScript
struct  titleScript_t2507487369  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject titleScript::titleCoverPrefab
	GameObject_t1113636619 * ___titleCoverPrefab_4;
	// UnityEngine.GameObject titleScript::titleCover
	GameObject_t1113636619 * ___titleCover_5;
	// System.Single titleScript::titleDuration
	float ___titleDuration_6;
	// System.Single titleScript::alpha
	float ___alpha_7;

public:
	inline static int32_t get_offset_of_titleCoverPrefab_4() { return static_cast<int32_t>(offsetof(titleScript_t2507487369, ___titleCoverPrefab_4)); }
	inline GameObject_t1113636619 * get_titleCoverPrefab_4() const { return ___titleCoverPrefab_4; }
	inline GameObject_t1113636619 ** get_address_of_titleCoverPrefab_4() { return &___titleCoverPrefab_4; }
	inline void set_titleCoverPrefab_4(GameObject_t1113636619 * value)
	{
		___titleCoverPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((&___titleCoverPrefab_4), value);
	}

	inline static int32_t get_offset_of_titleCover_5() { return static_cast<int32_t>(offsetof(titleScript_t2507487369, ___titleCover_5)); }
	inline GameObject_t1113636619 * get_titleCover_5() const { return ___titleCover_5; }
	inline GameObject_t1113636619 ** get_address_of_titleCover_5() { return &___titleCover_5; }
	inline void set_titleCover_5(GameObject_t1113636619 * value)
	{
		___titleCover_5 = value;
		Il2CppCodeGenWriteBarrier((&___titleCover_5), value);
	}

	inline static int32_t get_offset_of_titleDuration_6() { return static_cast<int32_t>(offsetof(titleScript_t2507487369, ___titleDuration_6)); }
	inline float get_titleDuration_6() const { return ___titleDuration_6; }
	inline float* get_address_of_titleDuration_6() { return &___titleDuration_6; }
	inline void set_titleDuration_6(float value)
	{
		___titleDuration_6 = value;
	}

	inline static int32_t get_offset_of_alpha_7() { return static_cast<int32_t>(offsetof(titleScript_t2507487369, ___alpha_7)); }
	inline float get_alpha_7() const { return ___alpha_7; }
	inline float* get_address_of_alpha_7() { return &___alpha_7; }
	inline void set_alpha_7(float value)
	{
		___alpha_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLESCRIPT_T2507487369_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GeneratedBuilderLite_2__ctor_m3173042820_gshared (GeneratedBuilderLite_2_t3548493156 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GeneratedBuilderLite_2_MergeFrom_m895345846_gshared (GeneratedBuilderLite_2_t3548493156 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.Object>(!!0[],!!0,System.Collections.Generic.IComparer`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_m1327939877_gshared (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, RuntimeObject * p1, RuntimeObject* p2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);

// System.Void Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::.ctor()
inline void GeneratedBuilderLite_2__ctor_m1251714133 (GeneratedBuilderLite_2_t3142848435 * __this, const RuntimeMethod* method)
{
	((  void (*) (GeneratedBuilderLite_2_t3142848435 *, const RuntimeMethod*))GeneratedBuilderLite_2__ctor_m3173042820_gshared)(__this, method);
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::get_DefaultInstance()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * OrientationEvent_get_DefaultInstance_m2374728749 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void OrientationEvent__ctor_m3708828125 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::PrepareBuilder()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * Builder_PrepareBuilder_m147557039 (Builder_t2279437287 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor(proto.PhoneEvent/Types/OrientationEvent)
extern "C" IL2CPP_METHOD_ATTR void Builder__ctor_m3220974630 (Builder_t2279437287 * __this, OrientationEvent_t158247624 * ___cloneFrom0, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Builder__ctor_m3698740796 (Builder_t2279437287 * __this, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent::MakeReadOnly()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * OrientationEvent_MakeReadOnly_m838780390 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(Google.ProtocolBuffers.IMessageLite)
inline Builder_t2279437287 * GeneratedBuilderLite_2_MergeFrom_m4038465069 (GeneratedBuilderLite_2_t3142848435 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  Builder_t2279437287 * (*) (GeneratedBuilderLite_2_t3142848435 *, RuntimeObject*, const RuntimeMethod*))GeneratedBuilderLite_2_MergeFrom_m895345846_gshared)(__this, p0, method);
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasTimestamp()
extern "C" IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasTimestamp_m3922884685 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Int64 proto.PhoneEvent/Types/OrientationEvent::get_Timestamp()
extern "C" IL2CPP_METHOD_ATTR int64_t OrientationEvent_get_Timestamp_m723854610 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Timestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m1393789818 (Builder_t2279437287 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasX()
extern "C" IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasX_m2602962142 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_X()
extern "C" IL2CPP_METHOD_ATTR float OrientationEvent_get_X_m884120132 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_X(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_X_m676748554 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasY()
extern "C" IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasY_m646647006 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_Y()
extern "C" IL2CPP_METHOD_ATTR float OrientationEvent_get_Y_m3222772292 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Y(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_Y_m133127197 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasZ()
extern "C" IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasZ_m2220625118 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_Z()
extern "C" IL2CPP_METHOD_ATTR float OrientationEvent_get_Z_m501783108 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Z(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_Z_m945314922 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean proto.PhoneEvent/Types/OrientationEvent::get_HasW()
extern "C" IL2CPP_METHOD_ATTR bool OrientationEvent_get_HasW_m1028984030 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Single proto.PhoneEvent/Types/OrientationEvent::get_W()
extern "C" IL2CPP_METHOD_ATTR float OrientationEvent_get_W_m546413124 (OrientationEvent_t158247624 * __this, const RuntimeMethod* method);
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_W(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_W_m2009947325 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
extern "C" IL2CPP_METHOD_ATTR ExtensionRegistry_t4271428238 * ExtensionRegistry_get_Empty_m3666683255 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
extern "C" IL2CPP_METHOD_ATTR StringComparer_t3301955079 * StringComparer_get_Ordinal_m2103862281 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Array::BinarySearch<System.String>(!!0[],!!0,System.Collections.Generic.IComparer`1<!!0>)
inline int32_t Array_BinarySearch_TisString_t_m2519237149 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, String_t* p1, RuntimeObject* p2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject * /* static, unused */, StringU5BU5D_t1281789340*, String_t*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRuntimeObject_m1327939877_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.InvalidProtocolBufferException::InvalidTag()
extern "C" IL2CPP_METHOD_ATTR InvalidProtocolBufferException_t2498581859 * InvalidProtocolBufferException_InvalidTag_m4139780452 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Google.ProtocolBuffers.WireFormat::IsEndGroupTag(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR bool WireFormat_IsEndGroupTag_m2504732292 (RuntimeObject * __this /* static, unused */, uint32_t p0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetTimestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetTimestamp_m3405041319 (Builder_t2279437287 * __this, int64_t ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetX(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetX_m1896712895 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetY(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetY_m1896677292 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetZ_m1897165581 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetW(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetW_m1896757142 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * Component_GetComponent_TisRenderer_t2627027031_m2651633905 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * Renderer_get_material_m4171603682 (Renderer_t2627027031 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Material_get_color_m3827673574 (Material_t340375123 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_set_color_m1794818007 (Material_t340375123 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * GameObject_GetComponent_TisRenderer_t2627027031_m1370005186 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Builder__ctor_m3698740796 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder__ctor_m3698740796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratedBuilderLite_2__ctor_m1251714133(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m1251714133_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		OrientationEvent_t158247624 * L_0 = OrientationEvent_get_DefaultInstance_m2374728749(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_result_1(L_0);
		__this->set_resultIsReadOnly_0((bool)1);
		return;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor(proto.PhoneEvent/Types/OrientationEvent)
extern "C" IL2CPP_METHOD_ATTR void Builder__ctor_m3220974630 (Builder_t2279437287 * __this, OrientationEvent_t158247624 * ___cloneFrom0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder__ctor_m3220974630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeneratedBuilderLite_2__ctor_m1251714133(__this, /*hidden argument*/GeneratedBuilderLite_2__ctor_m1251714133_RuntimeMethod_var);
		OrientationEvent_t158247624 * L_0 = ___cloneFrom0;
		__this->set_result_1(L_0);
		__this->set_resultIsReadOnly_0((bool)1);
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::get_ThisBuilder()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_get_ThisBuilder_m1772085724 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::PrepareBuilder()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * Builder_PrepareBuilder_m147557039 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_PrepareBuilder_m147557039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationEvent_t158247624 * V_0 = NULL;
	{
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		V_0 = L_1;
		OrientationEvent_t158247624 * L_2 = (OrientationEvent_t158247624 *)il2cpp_codegen_object_new(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		OrientationEvent__ctor_m3708828125(L_2, /*hidden argument*/NULL);
		__this->set_result_1(L_2);
		__this->set_resultIsReadOnly_0((bool)0);
		OrientationEvent_t158247624 * L_3 = V_0;
		VirtFuncInvoker1< Builder_t2279437287 *, OrientationEvent_t158247624 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(!0) */, __this, L_3);
	}

IL_002c:
	{
		OrientationEvent_t158247624 * L_4 = __this->get_result_1();
		return L_4;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_IsInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Builder_get_IsInitialized_m713386431 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean Google.ProtocolBuffers.AbstractMessageLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::get_IsInitialized() */, L_0);
		return L_1;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_MessageBeingBuilt()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * Builder_get_MessageBeingBuilt_m2039145112 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clear()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_Clear_m1516654503 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_Clear_m1516654503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		OrientationEvent_t158247624 * L_0 = OrientationEvent_get_DefaultInstance_m2374728749(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_result_1(L_0);
		__this->set_resultIsReadOnly_0((bool)1);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clone()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_Clone_m3442298780 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_Clone_m3442298780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		Builder_t2279437287 * L_2 = (Builder_t2279437287 *)il2cpp_codegen_object_new(Builder_t2279437287_il2cpp_TypeInfo_var);
		Builder__ctor_m3220974630(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0017:
	{
		Builder_t2279437287 * L_3 = (Builder_t2279437287 *)il2cpp_codegen_object_new(Builder_t2279437287_il2cpp_TypeInfo_var);
		Builder__ctor_m3698740796(L_3, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_4 = __this->get_result_1();
		NullCheck(L_3);
		Builder_t2279437287 * L_5 = VirtFuncInvoker1< Builder_t2279437287 *, OrientationEvent_t158247624 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(!0) */, L_3, L_4);
		return L_5;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_DefaultInstanceForType()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * Builder_get_DefaultInstanceForType_m980516419 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_get_DefaultInstanceForType_m980516419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		OrientationEvent_t158247624 * L_0 = OrientationEvent_get_DefaultInstance_m2374728749(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::BuildPartial()
extern "C" IL2CPP_METHOD_ATTR OrientationEvent_t158247624 * Builder_BuildPartial_m547782778 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_resultIsReadOnly_0();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		return L_1;
	}

IL_0012:
	{
		__this->set_resultIsReadOnly_0((bool)1);
		OrientationEvent_t158247624 * L_2 = __this->get_result_1();
		NullCheck(L_2);
		OrientationEvent_t158247624 * L_3 = OrientationEvent_MakeReadOnly_m838780390(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_MergeFrom_m1018040705 (Builder_t2279437287 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_MergeFrom_m1018040705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!((OrientationEvent_t158247624 *)IsInstSealed((RuntimeObject*)L_0, OrientationEvent_t158247624_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_1 = ___other0;
		Builder_t2279437287 * L_2 = VirtFuncInvoker1< Builder_t2279437287 *, OrientationEvent_t158247624 * >::Invoke(26 /* !1 Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(!0) */, __this, ((OrientationEvent_t158247624 *)CastclassSealed((RuntimeObject*)L_1, OrientationEvent_t158247624_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___other0;
		GeneratedBuilderLite_2_MergeFrom_m4038465069(__this, L_3, /*hidden argument*/GeneratedBuilderLite_2_MergeFrom_m4038465069_RuntimeMethod_var);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(proto.PhoneEvent/Types/OrientationEvent)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_MergeFrom_m3801718990 (Builder_t2279437287 * __this, OrientationEvent_t158247624 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_MergeFrom_m3801718990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OrientationEvent_t158247624 * L_0 = ___other0;
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		OrientationEvent_t158247624 * L_1 = OrientationEvent_get_DefaultInstance_m2374728749(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(OrientationEvent_t158247624 *)L_0) == ((RuntimeObject*)(OrientationEvent_t158247624 *)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		return __this;
	}

IL_000d:
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_2 = ___other0;
		NullCheck(L_2);
		bool L_3 = OrientationEvent_get_HasTimestamp_m3922884685(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		OrientationEvent_t158247624 * L_4 = ___other0;
		NullCheck(L_4);
		int64_t L_5 = OrientationEvent_get_Timestamp_m723854610(L_4, /*hidden argument*/NULL);
		Builder_set_Timestamp_m1393789818(__this, L_5, /*hidden argument*/NULL);
	}

IL_002b:
	{
		OrientationEvent_t158247624 * L_6 = ___other0;
		NullCheck(L_6);
		bool L_7 = OrientationEvent_get_HasX_m2602962142(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		OrientationEvent_t158247624 * L_8 = ___other0;
		NullCheck(L_8);
		float L_9 = OrientationEvent_get_X_m884120132(L_8, /*hidden argument*/NULL);
		Builder_set_X_m676748554(__this, L_9, /*hidden argument*/NULL);
	}

IL_0042:
	{
		OrientationEvent_t158247624 * L_10 = ___other0;
		NullCheck(L_10);
		bool L_11 = OrientationEvent_get_HasY_m646647006(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		OrientationEvent_t158247624 * L_12 = ___other0;
		NullCheck(L_12);
		float L_13 = OrientationEvent_get_Y_m3222772292(L_12, /*hidden argument*/NULL);
		Builder_set_Y_m133127197(__this, L_13, /*hidden argument*/NULL);
	}

IL_0059:
	{
		OrientationEvent_t158247624 * L_14 = ___other0;
		NullCheck(L_14);
		bool L_15 = OrientationEvent_get_HasZ_m2220625118(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		OrientationEvent_t158247624 * L_16 = ___other0;
		NullCheck(L_16);
		float L_17 = OrientationEvent_get_Z_m501783108(L_16, /*hidden argument*/NULL);
		Builder_set_Z_m945314922(__this, L_17, /*hidden argument*/NULL);
	}

IL_0070:
	{
		OrientationEvent_t158247624 * L_18 = ___other0;
		NullCheck(L_18);
		bool L_19 = OrientationEvent_get_HasW_m1028984030(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0087;
		}
	}
	{
		OrientationEvent_t158247624 * L_20 = ___other0;
		NullCheck(L_20);
		float L_21 = OrientationEvent_get_W_m546413124(L_20, /*hidden argument*/NULL);
		Builder_set_W_m2009947325(__this, L_21, /*hidden argument*/NULL);
	}

IL_0087:
	{
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_MergeFrom_m877028760 (Builder_t2279437287 * __this, RuntimeObject* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_MergeFrom_m877028760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ExtensionRegistry_t4271428238_il2cpp_TypeInfo_var);
		ExtensionRegistry_t4271428238 * L_1 = ExtensionRegistry_get_Empty_m3666683255(NULL /*static, unused*/, /*hidden argument*/NULL);
		Builder_t2279437287 * L_2 = VirtFuncInvoker2< Builder_t2279437287 *, RuntimeObject*, ExtensionRegistry_t4271428238 * >::Invoke(14 /* !1 Google.ProtocolBuffers.AbstractBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry) */, __this, L_0, L_1);
		return L_2;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_MergeFrom_m160215804 (Builder_t2279437287 * __this, RuntimeObject* ___input0, ExtensionRegistry_t4271428238 * ___extensionRegistry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Builder_MergeFrom_m160215804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		goto IL_0147;
	}

IL_000c:
	{
		uint32_t L_0 = V_0;
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		StringU5BU5D_t1281789340* L_2 = ((OrientationEvent_t158247624_StaticFields*)il2cpp_codegen_static_fields_for(OrientationEvent_t158247624_il2cpp_TypeInfo_var))->get__orientationEventFieldNames_1();
		String_t* L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t3301955079_il2cpp_TypeInfo_var);
		StringComparer_t3301955079 * L_4 = StringComparer_get_Ordinal_m2103862281(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Array_BinarySearch_TisString_t_m2519237149(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/Array_BinarySearch_TisString_t_m2519237149_RuntimeMethod_var);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OrientationEvent_t158247624_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_7 = ((OrientationEvent_t158247624_StaticFields*)il2cpp_codegen_static_fields_for(OrientationEvent_t158247624_il2cpp_TypeInfo_var))->get__orientationEventFieldTags_2();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = L_10;
		goto IL_004d;
	}

IL_003d:
	{
		RuntimeObject* L_11 = ___input0;
		ExtensionRegistry_t4271428238 * L_12 = ___extensionRegistry1;
		uint32_t L_13 = V_0;
		String_t* L_14 = V_1;
		VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_t4271428238 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_11, L_12, L_13, L_14);
		goto IL_0147;
	}

IL_004d:
	{
		uint32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)8)))
		{
			goto IL_00a2;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)21))))
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)29))))
		{
			goto IL_00e4;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)37))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)45))))
		{
			goto IL_0126;
		}
	}
	{
		goto IL_0085;
	}

IL_007f:
	{
		InvalidProtocolBufferException_t2498581859 * L_21 = InvalidProtocolBufferException_InvalidTag_m4139780452(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, Builder_MergeFrom_m160215804_RuntimeMethod_var);
	}

IL_0085:
	{
		uint32_t L_22 = V_0;
		bool L_23 = WireFormat_IsEndGroupTag_m2504732292(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0092;
		}
	}
	{
		return __this;
	}

IL_0092:
	{
		RuntimeObject* L_24 = ___input0;
		ExtensionRegistry_t4271428238 * L_25 = ___extensionRegistry1;
		uint32_t L_26 = V_0;
		String_t* L_27 = V_1;
		VirtFuncInvoker4< bool, RuntimeObject*, ExtensionRegistry_t4271428238 *, uint32_t, String_t* >::Invoke(27 /* System.Boolean Google.ProtocolBuffers.GeneratedBuilderLite`2<proto.PhoneEvent/Types/OrientationEvent,proto.PhoneEvent/Types/OrientationEvent/Builder>::ParseUnknownField(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry,System.UInt32,System.String) */, __this, L_24, L_25, L_26, L_27);
		goto IL_0147;
	}

IL_00a2:
	{
		OrientationEvent_t158247624 * L_28 = __this->get_result_1();
		RuntimeObject* L_29 = ___input0;
		OrientationEvent_t158247624 * L_30 = __this->get_result_1();
		NullCheck(L_30);
		int64_t* L_31 = L_30->get_address_of_timestamp__5();
		NullCheck(L_29);
		bool L_32 = InterfaceFuncInvoker1< bool, int64_t* >::Invoke(2 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadInt64(System.Int64&) */, ICodedInputStream_t3221112298_il2cpp_TypeInfo_var, L_29, (int64_t*)L_31);
		NullCheck(L_28);
		L_28->set_hasTimestamp_4(L_32);
		goto IL_0147;
	}

IL_00c3:
	{
		OrientationEvent_t158247624 * L_33 = __this->get_result_1();
		RuntimeObject* L_34 = ___input0;
		OrientationEvent_t158247624 * L_35 = __this->get_result_1();
		NullCheck(L_35);
		float* L_36 = L_35->get_address_of_x__8();
		NullCheck(L_34);
		bool L_37 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_t3221112298_il2cpp_TypeInfo_var, L_34, (float*)L_36);
		NullCheck(L_33);
		L_33->set_hasX_7(L_37);
		goto IL_0147;
	}

IL_00e4:
	{
		OrientationEvent_t158247624 * L_38 = __this->get_result_1();
		RuntimeObject* L_39 = ___input0;
		OrientationEvent_t158247624 * L_40 = __this->get_result_1();
		NullCheck(L_40);
		float* L_41 = L_40->get_address_of_y__11();
		NullCheck(L_39);
		bool L_42 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_t3221112298_il2cpp_TypeInfo_var, L_39, (float*)L_41);
		NullCheck(L_38);
		L_38->set_hasY_10(L_42);
		goto IL_0147;
	}

IL_0105:
	{
		OrientationEvent_t158247624 * L_43 = __this->get_result_1();
		RuntimeObject* L_44 = ___input0;
		OrientationEvent_t158247624 * L_45 = __this->get_result_1();
		NullCheck(L_45);
		float* L_46 = L_45->get_address_of_z__14();
		NullCheck(L_44);
		bool L_47 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_t3221112298_il2cpp_TypeInfo_var, L_44, (float*)L_46);
		NullCheck(L_43);
		L_43->set_hasZ_13(L_47);
		goto IL_0147;
	}

IL_0126:
	{
		OrientationEvent_t158247624 * L_48 = __this->get_result_1();
		RuntimeObject* L_49 = ___input0;
		OrientationEvent_t158247624 * L_50 = __this->get_result_1();
		NullCheck(L_50);
		float* L_51 = L_50->get_address_of_w__17();
		NullCheck(L_49);
		bool L_52 = InterfaceFuncInvoker1< bool, float* >::Invoke(1 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadFloat(System.Single&) */, ICodedInputStream_t3221112298_il2cpp_TypeInfo_var, L_49, (float*)L_51);
		NullCheck(L_48);
		L_48->set_hasW_16(L_52);
		goto IL_0147;
	}

IL_0147:
	{
		RuntimeObject* L_53 = ___input0;
		NullCheck(L_53);
		bool L_54 = InterfaceFuncInvoker2< bool, uint32_t*, String_t** >::Invoke(0 /* System.Boolean Google.ProtocolBuffers.ICodedInputStream::ReadTag(System.UInt32&,System.String&) */, ICodedInputStream_t3221112298_il2cpp_TypeInfo_var, L_53, (uint32_t*)(&V_0), (String_t**)(&V_1));
		if (L_54)
		{
			goto IL_000c;
		}
	}
	{
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasTimestamp()
extern "C" IL2CPP_METHOD_ATTR bool Builder_get_HasTimestamp_m1547058296 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasTimestamp_4();
		return L_1;
	}
}
// System.Int64 proto.PhoneEvent/Types/OrientationEvent/Builder::get_Timestamp()
extern "C" IL2CPP_METHOD_ATTR int64_t Builder_get_Timestamp_m31994274 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		int64_t L_1 = OrientationEvent_get_Timestamp_m723854610(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Timestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_Timestamp_m1393789818 (Builder_t2279437287 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		Builder_SetTimestamp_m3405041319(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetTimestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetTimestamp_m3405041319 (Builder_t2279437287 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasTimestamp_4((bool)1);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		int64_t L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_timestamp__5(L_2);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearTimestamp()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_ClearTimestamp_m367876833 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasTimestamp_4((bool)0);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_timestamp__5((((int64_t)((int64_t)0))));
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasX()
extern "C" IL2CPP_METHOD_ATTR bool Builder_get_HasX_m634003612 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasX_7();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_X()
extern "C" IL2CPP_METHOD_ATTR float Builder_get_X_m2604638198 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1 = OrientationEvent_get_X_m884120132(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_X(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_X_m676748554 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Builder_SetX_m1896712895(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetX(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetX_m1896712895 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasX_7((bool)1);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		float L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_x__8(L_2);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearX()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_ClearX_m1377224253 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasX_7((bool)0);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_x__8((0.0f));
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasY()
extern "C" IL2CPP_METHOD_ATTR bool Builder_get_HasY_m2972655772 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasY_10();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Y()
extern "C" IL2CPP_METHOD_ATTR float Builder_get_Y_m265986038 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1 = OrientationEvent_get_Y_m3222772292(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Y(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_Y_m133127197 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Builder_SetY_m1896677292(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetY(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetY_m1896677292 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasY_10((bool)1);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		float L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_y__11(L_2);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearY()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_ClearY_m2943308194 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasY_10((bool)0);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_y__11((0.0f));
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasZ()
extern "C" IL2CPP_METHOD_ATTR bool Builder_get_HasZ_m1016340636 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasZ_13();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Z()
extern "C" IL2CPP_METHOD_ATTR float Builder_get_Z_m2222301174 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1 = OrientationEvent_get_Z_m501783108(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Z(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_Z_m945314922 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Builder_SetZ_m1897165581(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetZ(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetZ_m1897165581 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasZ_13((bool)1);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		float L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_z__14(L_2);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearZ()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_ClearZ_m2540023667 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasZ_13((bool)0);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_z__14((0.0f));
		return __this;
	}
}
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasW()
extern "C" IL2CPP_METHOD_ATTR bool Builder_get_HasW_m2590318748 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_hasW_16();
		return L_1;
	}
}
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_W()
extern "C" IL2CPP_METHOD_ATTR float Builder_get_W_m2177671158 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		float L_1 = OrientationEvent_get_W_m546413124(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_W(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Builder_set_W_m2009947325 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		Builder_SetW_m1896757142(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetW(System.Single)
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_SetW_m1896757142 (Builder_t2279437287 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasW_16((bool)1);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		float L_2 = ___value0;
		NullCheck(L_1);
		L_1->set_w__17(L_2);
		return __this;
	}
}
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearW()
extern "C" IL2CPP_METHOD_ATTR Builder_t2279437287 * Builder_ClearW_m1424278420 (Builder_t2279437287 * __this, const RuntimeMethod* method)
{
	{
		Builder_PrepareBuilder_m147557039(__this, /*hidden argument*/NULL);
		OrientationEvent_t158247624 * L_0 = __this->get_result_1();
		NullCheck(L_0);
		L_0->set_hasW_16((bool)0);
		OrientationEvent_t158247624 * L_1 = __this->get_result_1();
		NullCheck(L_1);
		L_1->set_w__17((0.0f));
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void proto.Proto.PhoneEvent::.cctor()
extern "C" IL2CPP_METHOD_ATTR void PhoneEvent__cctor_m3021104822 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhoneEvent__cctor_m3021104822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PhoneEvent_t3448566392_StaticFields*)il2cpp_codegen_static_fields_for(PhoneEvent_t3448566392_il2cpp_TypeInfo_var))->set_Descriptor_0(NULL);
		return;
	}
}
// System.Void proto.Proto.PhoneEvent::RegisterAllExtensions(Google.ProtocolBuffers.ExtensionRegistry)
extern "C" IL2CPP_METHOD_ATTR void PhoneEvent_RegisterAllExtensions_m1978679754 (RuntimeObject * __this /* static, unused */, ExtensionRegistry_t4271428238 * ___registry0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void titleScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void titleScript__ctor_m3697921593 (titleScript_t2507487369 * __this, const RuntimeMethod* method)
{
	{
		__this->set_titleDuration_6((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void titleScript::Start()
extern "C" IL2CPP_METHOD_ATTR void titleScript_Start_m633093313 (titleScript_t2507487369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (titleScript_Start_m633093313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_t340375123 * V_0 = NULL;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_titleCoverPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_1 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_0, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		__this->set_titleCover_5(L_1);
		Renderer_t2627027031 * L_2 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t340375123 * L_3 = Renderer_get_material_m4171603682(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Material_t340375123 * L_4 = V_0;
		NullCheck(L_4);
		Color_t2555686324  L_5 = Material_get_color_m3827673574(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = __this->get_alpha_7();
		(&V_1)->set_a_3(L_6);
		Material_t340375123 * L_7 = V_0;
		Color_t2555686324  L_8 = V_1;
		NullCheck(L_7);
		Material_set_color_m1794818007(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void titleScript::Update()
extern "C" IL2CPP_METHOD_ATTR void titleScript_Update_m4116460205 (titleScript_t2507487369 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (titleScript_Update_m4116460205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Material_t340375123 * V_0 = NULL;
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		float L_0 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_titleDuration_6();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0068;
		}
	}
	{
		float L_2 = __this->get_alpha_7();
		if ((!(((double)(((double)((double)L_2)))) <= ((double)(1.0)))))
		{
			goto IL_0068;
		}
	}
	{
		GameObject_t1113636619 * L_3 = __this->get_titleCover_5();
		NullCheck(L_3);
		Renderer_t2627027031 * L_4 = GameObject_GetComponent_TisRenderer_t2627027031_m1370005186(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1370005186_RuntimeMethod_var);
		NullCheck(L_4);
		Material_t340375123 * L_5 = Renderer_get_material_m4171603682(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Material_t340375123 * L_6 = V_0;
		NullCheck(L_6);
		Color_t2555686324  L_7 = Material_get_color_m3827673574(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = __this->get_alpha_7();
		(&V_1)->set_a_3(L_8);
		Material_t340375123 * L_9 = V_0;
		Color_t2555686324  L_10 = V_1;
		NullCheck(L_9);
		Material_set_color_m1794818007(L_9, L_10, /*hidden argument*/NULL);
		float L_11 = __this->get_alpha_7();
		__this->set_alpha_7(((float)il2cpp_codegen_add((float)L_11, (float)(0.01f))));
		goto IL_0095;
	}

IL_0068:
	{
		float L_12 = __this->get_alpha_7();
		if ((!(((double)(((double)((double)L_12)))) == ((double)(1.0)))))
		{
			goto IL_0095;
		}
	}
	{
		GameObject_t1113636619 * L_13 = __this->get_titleCover_5();
		NullCheck(L_13);
		GameObject_SetActive_m796801857(L_13, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m796801857(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
