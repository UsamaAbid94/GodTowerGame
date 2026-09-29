#include "pch-cpp.hpp"





template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F;
struct JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219;
struct JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D;
struct JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C;
struct JsonValue_1_t6B98FC1A6235A1104D2749C376B91CB2DE3DCB5F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonValueKind_t86CF24FA22C77B3FB161CDE8C0842689DB648024_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	uint64_t ____dateData;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent;
	int32_t ____idx;
};
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_pinvoke
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent;
	int32_t ____idx;
};
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_com
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent;
	int32_t ____idx;
};
struct JsonNodeOptions_t5DBFA316A5BDB8AEC0E22C662258E1248F4D8F80 
{
	bool ___U3CPropertyNameCaseInsensitiveU3Ek__BackingField;
};
struct JsonNodeOptions_t5DBFA316A5BDB8AEC0E22C662258E1248F4D8F80_marshaled_pinvoke
{
	int32_t ___U3CPropertyNameCaseInsensitiveU3Ek__BackingField;
};
struct JsonNodeOptions_t5DBFA316A5BDB8AEC0E22C662258E1248F4D8F80_marshaled_com
{
	int32_t ___U3CPropertyNameCaseInsensitiveU3Ek__BackingField;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Nullable_1_t1696B80995FF4783E07B559D9579C101320681FC 
{
	bool ___hasValue;
	JsonNodeOptions_t5DBFA316A5BDB8AEC0E22C662258E1248F4D8F80 ___value;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime;
	int16_t ____offsetMinutes;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct JsonValueKind_t86CF24FA22C77B3FB161CDE8C0842689DB648024 
{
	uint8_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct JsonNode_t8767EC39C061077D49723679B6943C39E82C36FC  : public RuntimeObject
{
	JsonNode_t8767EC39C061077D49723679B6943C39E82C36FC* ____parent;
	Nullable_1_t1696B80995FF4783E07B559D9579C101320681FC ____options;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct JsonValue_t585E8F0642F87430003E01DE1C4E12170C7E8787  : public JsonNode_t8767EC39C061077D49723679B6943C39E82C36FC
{
};
struct JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F  : public JsonValue_t585E8F0642F87430003E01DE1C4E12170C7E8787
{
	double ___Value;
};
struct JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219  : public JsonValue_t585E8F0642F87430003E01DE1C4E12170C7E8787
{
	int32_t ___Value;
};
struct JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D  : public JsonValue_t585E8F0642F87430003E01DE1C4E12170C7E8787
{
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___Value;
};
struct JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C  : public JsonValue_t585E8F0642F87430003E01DE1C4E12170C7E8787
{
	RuntimeObject* ___Value;
};
struct JsonValue_1_t6B98FC1A6235A1104D2749C376B91CB2DE3DCB5F : public JsonValue_t585E8F0642F87430003E01DE1C4E12170C7E8787 {};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue;
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m28240B6107A472B97BD1E061D76409B858CB0E78_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9701DB68C68234C74F81549E6105B23EBF52582E_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, bool* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA60F4DAA79F35BF441C295C154CB68D354DAF3B1_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, int32_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_mA9C7E0961655EAEE6D499034035977B537DE15B8_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_mD1E1A7F16ADDC8712EA87AE9B435ECED138D5F55_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF6074164F9D644F1BC2EFE7FE7DCDB2565B9E04_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, bool* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD765CDA339158DA5BFFE7AD973DD8FF1053B3139_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, int32_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0B92107E3863E53DC7719CFE784DA53881E735B6_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m43115C2DF5D11C22B216BF6BE475D59AE8E275D8_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB64F1885B17F3AA9FB637D962D8E19BEC38E44F6_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, bool* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA5D0F975AA26A45988B219920E1A6AAEBF89F5C_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, int32_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m99115B7B6584A8DFE3D234CD5B3027F4CDBC1648_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m5745419E70BAC382D35044BE314AB4360B5871BC_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDD27C6ACF77B35A7B6CE12E56E08CE62682C3DDC_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, bool* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43D87972FE6078DB969F068850E708E7EAE2D29B_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, int32_t* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0E82F3908753351C411210BF1B161AB0606FDEE7_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;

inline RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m28240B6107A472B97BD1E061D76409B858CB0E78 (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F*, const RuntimeMethod*))JsonValue_1_ConvertJsonElement_TisRuntimeObject_m28240B6107A472B97BD1E061D76409B858CB0E78_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NodeUnableToConvert_mD8A395244D268D08F2FC623B7A1AF20C99AFF7A2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, int32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, int64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, double* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, int16_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, uint8_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, float* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, uint32_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, uint16_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, uint64_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, int8_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, Guid_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
inline bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9701DB68C68234C74F81549E6105B23EBF52582E (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, bool* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F*, bool*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9701DB68C68234C74F81549E6105B23EBF52582E_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA60F4DAA79F35BF441C295C154CB68D354DAF3B1 (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, int32_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F*, int32_t*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA60F4DAA79F35BF441C295C154CB68D354DAF3B1_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_mA9C7E0961655EAEE6D499034035977B537DE15B8 (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, RuntimeObject** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F*, RuntimeObject**, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisRuntimeObject_mA9C7E0961655EAEE6D499034035977B537DE15B8_gshared)(__this, ___0_result, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonElement_GetInt64_m36B64100ED0C723424B67C43D9F3FFD3F7440071 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonElement_GetDouble_mE17DAB42B3F55ACCBC970F3466BCBB8951A326BF (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t JsonElement_GetInt16_mBB39D07DCB65BCCA817A7D1169BBC7BD3F507D48 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F JsonElement_GetDecimal_m22272312D2021349A6EB7E2F9B7887C5F44ABCAE (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonElement_GetByte_m35643A5845F97071131C7F452B3752C5CA6E055E (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JsonElement_GetSingle_m0F4CC322B96916B5F77259B9BDC523F301A42991 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JsonElement_GetUInt32_mD3E31244BC7A3FF44A58E823246C0C1A0C243CEA (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t JsonElement_GetUInt16_m641F42FA26FD197143A96A403638C9562828915C (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JsonElement_GetUInt64_mF908D0DE0C6A308AC74306C6CC953FBC9AA3931D (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t JsonElement_GetSByte_m4298D16E69458AC80878131C2C341689F714FA19 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D JsonElement_GetDateTime_mAFA3DE8F3E1C93354929F73CEB73243A175D48CB (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 JsonElement_GetDateTimeOffset_m4BC5D72139AA83336EC5E61737809DEAF379F227 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t JsonElement_GetGuid_m023B14654E51753008C57E33759AEB291873BD61 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_NodeUnableToConvertElement_mD0D5FA6963288CDFFD80E4C73C3C1EB3417E6123 (const RuntimeMethod* method) ;
inline RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_mD1E1A7F16ADDC8712EA87AE9B435ECED138D5F55 (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219*, const RuntimeMethod*))JsonValue_1_ConvertJsonElement_TisRuntimeObject_mD1E1A7F16ADDC8712EA87AE9B435ECED138D5F55_gshared)(__this, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF6074164F9D644F1BC2EFE7FE7DCDB2565B9E04 (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, bool* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219*, bool*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF6074164F9D644F1BC2EFE7FE7DCDB2565B9E04_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD765CDA339158DA5BFFE7AD973DD8FF1053B3139 (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, int32_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219*, int32_t*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD765CDA339158DA5BFFE7AD973DD8FF1053B3139_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0B92107E3863E53DC7719CFE784DA53881E735B6 (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, RuntimeObject** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219*, RuntimeObject**, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0B92107E3863E53DC7719CFE784DA53881E735B6_gshared)(__this, ___0_result, method);
}
inline RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m43115C2DF5D11C22B216BF6BE475D59AE8E275D8 (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D*, const RuntimeMethod*))JsonValue_1_ConvertJsonElement_TisRuntimeObject_m43115C2DF5D11C22B216BF6BE475D59AE8E275D8_gshared)(__this, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB64F1885B17F3AA9FB637D962D8E19BEC38E44F6 (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, bool* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D*, bool*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB64F1885B17F3AA9FB637D962D8E19BEC38E44F6_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA5D0F975AA26A45988B219920E1A6AAEBF89F5C (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, int32_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D*, int32_t*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA5D0F975AA26A45988B219920E1A6AAEBF89F5C_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m99115B7B6584A8DFE3D234CD5B3027F4CDBC1648 (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, RuntimeObject** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D*, RuntimeObject**, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m99115B7B6584A8DFE3D234CD5B3027F4CDBC1648_gshared)(__this, ___0_result, method);
}
inline RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m5745419E70BAC382D35044BE314AB4360B5871BC (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C*, const RuntimeMethod*))JsonValue_1_ConvertJsonElement_TisRuntimeObject_m5745419E70BAC382D35044BE314AB4360B5871BC_gshared)(__this, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDD27C6ACF77B35A7B6CE12E56E08CE62682C3DDC (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, bool* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C*, bool*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDD27C6ACF77B35A7B6CE12E56E08CE62682C3DDC_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43D87972FE6078DB969F068850E708E7EAE2D29B (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, int32_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C*, int32_t*, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43D87972FE6078DB969F068850E708E7EAE2D29B_gshared)(__this, ___0_result, method);
}
inline bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0E82F3908753351C411210BF1B161AB0606FDEE7 (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, RuntimeObject** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C*, RuntimeObject**, const RuntimeMethod*))JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0E82F3908753351C411210BF1B161AB0606FDEE7_gshared)(__this, ___0_result, method);
}
// Method Definition Index: 63208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_GetValue_TisRuntimeObject_m140C2A6A3850131EA36D7CD39247881F2E59BF9D_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	double V_1 = 0.0;
	{
		double L_0 = __this->___Value;
		V_1 = L_0;
		double L_1 = V_1;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0027;
		}
	}
	{
		double L_4 = V_1;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_0;
		return L_7;
	}

IL_0027:
	{
		double L_8 = __this->___Value;
		double L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_9);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_11;
		L_11 = JsonValue_1_ConvertJsonElement_TisRuntimeObject_m28240B6107A472B97BD1E061D76409B858CB0E78(__this, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_11;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_12;
		L_12 = SR_get_NodeUnableToConvert_mD8A395244D268D08F2FC623B7A1AF20C99AFF7A2(NULL);
		double L_13 = __this->___Value;
		V_1 = L_13;
		Il2CppFakeBox<double> L_14(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (&V_1));
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_14), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_12, (RuntimeObject*)L_15, (RuntimeObject*)L_17, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}
}
// Method Definition Index: 63208
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9701DB68C68234C74F81549E6105B23EBF52582E_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		double L_0 = __this->___Value;
		double L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		bool* L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(bool*)L_16 = ((*(bool*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		bool* L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(bool*)L_32 = ((*(bool*)UnBox(L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		bool* L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(bool*)L_48 = ((*(bool*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		bool* L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(bool*)L_64 = ((*(bool*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		bool* L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(bool*)L_80 = ((*(bool*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		bool* L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(bool*)L_96 = ((*(bool*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		bool* L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(bool*)L_112 = ((*(bool*)UnBox(L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		bool* L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(bool*)L_128 = ((*(bool*)UnBox(L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		bool* L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(bool*)L_144 = ((*(bool*)UnBox(L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		bool* L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(bool*)L_160 = ((*(bool*)UnBox(L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		bool* L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(bool*)L_176 = ((*(bool*)UnBox(L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		bool* L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(bool*)L_187 = ((*(bool*)UnBox((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		bool* L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(bool*)L_200 = ((*(bool*)UnBox(L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		bool* L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(bool*)L_216 = ((*(bool*)UnBox(L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		bool* L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(bool*)L_232 = ((*(bool*)UnBox(L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		bool* L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(bool*)L_250 = ((*(bool*)UnBox(L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		bool* L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(bool*)L_265 = ((*(bool*)UnBox(L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		bool* L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA60F4DAA79F35BF441C295C154CB68D354DAF3B1_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		double L_0 = __this->___Value;
		double L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		int32_t* L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(int32_t*)L_16 = ((*(int32_t*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		int32_t* L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(int32_t*)L_32 = ((*(int32_t*)UnBox(L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		int32_t* L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(int32_t*)L_48 = ((*(int32_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		int32_t* L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(int32_t*)L_64 = ((*(int32_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		int32_t* L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(int32_t*)L_80 = ((*(int32_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		int32_t* L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(int32_t*)L_96 = ((*(int32_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		int32_t* L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(int32_t*)L_112 = ((*(int32_t*)UnBox(L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		int32_t* L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(int32_t*)L_128 = ((*(int32_t*)UnBox(L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		int32_t* L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(int32_t*)L_144 = ((*(int32_t*)UnBox(L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		int32_t* L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(int32_t*)L_160 = ((*(int32_t*)UnBox(L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		int32_t* L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(int32_t*)L_176 = ((*(int32_t*)UnBox(L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		int32_t* L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(int32_t*)L_187 = ((*(int32_t*)UnBox((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		int32_t* L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(int32_t*)L_200 = ((*(int32_t*)UnBox(L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		int32_t* L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(int32_t*)L_216 = ((*(int32_t*)UnBox(L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		int32_t* L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(int32_t*)L_232 = ((*(int32_t*)UnBox(L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		int32_t* L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(int32_t*)L_250 = ((*(int32_t*)UnBox(L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		int32_t* L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(int32_t*)L_265 = ((*(int32_t*)UnBox(L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		int32_t* L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_mA9C7E0961655EAEE6D499034035977B537DE15B8_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		double L_0 = __this->___Value;
		double L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		RuntimeObject** L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(RuntimeObject**)L_16 = ((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		RuntimeObject** L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(RuntimeObject**)L_32 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_32, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		RuntimeObject** L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(RuntimeObject**)L_48 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_48, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		RuntimeObject** L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(RuntimeObject**)L_64 = ((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_64, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		RuntimeObject** L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		RuntimeObject** L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(RuntimeObject**)L_96 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_96, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		RuntimeObject** L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(RuntimeObject**)L_112 = ((RuntimeObject*)Castclass((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_112, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		RuntimeObject** L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(RuntimeObject**)L_128 = ((RuntimeObject*)Castclass((RuntimeObject*)L_131, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_128, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		RuntimeObject** L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(RuntimeObject**)L_144 = ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_144, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		RuntimeObject** L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(RuntimeObject**)L_160 = ((RuntimeObject*)Castclass((RuntimeObject*)L_163, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_160, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		RuntimeObject** L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(RuntimeObject**)L_176 = ((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_176, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		RuntimeObject** L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(RuntimeObject**)L_187 = ((RuntimeObject*)Castclass((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_187, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		RuntimeObject** L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(RuntimeObject**)L_200 = ((RuntimeObject*)Castclass((RuntimeObject*)L_203, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_200, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		RuntimeObject** L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(RuntimeObject**)L_216 = ((RuntimeObject*)Castclass((RuntimeObject*)L_219, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_216, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		RuntimeObject** L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(RuntimeObject**)L_232 = ((RuntimeObject*)Castclass((RuntimeObject*)L_235, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_232, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		RuntimeObject** L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(RuntimeObject**)L_250 = ((RuntimeObject*)Castclass((RuntimeObject*)L_254, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_250, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		RuntimeObject** L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(RuntimeObject**)L_265 = ((RuntimeObject*)Castclass((RuntimeObject*)L_268, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_265, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		RuntimeObject** L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m988CF62327D7697357E02F373E3D2AC157CFEC3D_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	double V_1 = 0.0;
	{
		double L_0 = __this->___Value;
		V_1 = L_0;
		double L_1 = V_1;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		double L_4 = V_1;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((*(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		bool* L_7 = ___0_value;
		bool L_8 = V_0;
		*(bool*)L_7 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		double L_9 = __this->___Value;
		double L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		bool* L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9701DB68C68234C74F81549E6105B23EBF52582E(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		bool* L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m56CBF7FBD5476E74CF5339058E798D794F3B305C_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	{
		double L_0 = __this->___Value;
		V_1 = L_0;
		double L_1 = V_1;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		double L_4 = V_1;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((*(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		int32_t* L_7 = ___0_value;
		int32_t L_8 = V_0;
		*(int32_t*)L_7 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		double L_9 = __this->___Value;
		double L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA60F4DAA79F35BF441C295C154CB68D354DAF3B1(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		int32_t* L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisRuntimeObject_m9E214A4EBD760CB702650199D1B268A5754FE096_gshared (JsonValue_1_t2803AB848C8EA0E12C3C32736D5CD44042ED3A1F* __this, RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	double V_1 = 0.0;
	{
		double L_0 = __this->___Value;
		V_1 = L_0;
		double L_1 = V_1;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		double L_4 = V_1;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject** L_7 = ___0_value;
		RuntimeObject* L_8 = V_0;
		*(RuntimeObject**)L_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)L_8);
		return (bool)1;
	}

IL_002e:
	{
		double L_9 = __this->___Value;
		double L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject** L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisRuntimeObject_mA9C7E0961655EAEE6D499034035977B537DE15B8(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		RuntimeObject** L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
// Method Definition Index: 63211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_mD1E1A7F16ADDC8712EA87AE9B435ECED138D5F55_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___Value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_0 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		V_1 = L_3;
		uint8_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_0351;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_04aa;
			}
			case 3:
			{
				goto IL_04aa;
			}
		}
	}
	{
		goto IL_04f2;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_007e;
		}
	}

IL_006c:
	{
		int32_t L_15;
		L_15 = JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73((&V_0), NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_007e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		if (!L_27)
		{
			goto IL_00c6;
		}
	}

IL_00b4:
	{
		int64_t L_28;
		L_28 = JsonElement_GetInt64_m36B64100ED0C723424B67C43D9F3FFD3F7440071((&V_0), NULL);
		int64_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_defaults.int64_class, &L_29);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (L_35)
		{
			goto IL_00fc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_010e;
		}
	}

IL_00fc:
	{
		double L_41;
		L_41 = JsonElement_GetDouble_mE17DAB42B3F55ACCBC970F3466BCBB8951A326BF((&V_0), NULL);
		double L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_defaults.double_class, &L_42);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (L_48)
		{
			goto IL_0144;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_0156;
		}
	}

IL_0144:
	{
		int16_t L_54;
		L_54 = JsonElement_GetInt16_mBB39D07DCB65BCCA817A7D1169BBC7BD3F507D48((&V_0), NULL);
		int16_t L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_defaults.int16_class, &L_55);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0156:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
		if (L_61)
		{
			goto IL_018c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		bool L_66;
		L_66 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_63, L_65, NULL);
		if (!L_66)
		{
			goto IL_019e;
		}
	}

IL_018c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_67;
		L_67 = JsonElement_GetDecimal_m22272312D2021349A6EB7E2F9B7887C5F44ABCAE((&V_0), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_68 = L_67;
		RuntimeObject* L_69 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_68);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_69, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_019e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		if (L_74)
		{
			goto IL_01d4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		bool L_79;
		L_79 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_76, L_78, NULL);
		if (!L_79)
		{
			goto IL_01e6;
		}
	}

IL_01d4:
	{
		uint8_t L_80;
		L_80 = JsonElement_GetByte_m35643A5845F97071131C7F452B3752C5CA6E055E((&V_0), NULL);
		uint8_t L_81 = L_80;
		RuntimeObject* L_82 = Box(il2cpp_defaults.byte_class, &L_81);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_82, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_01e6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_84, L_86, NULL);
		if (L_87)
		{
			goto IL_021c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_022e;
		}
	}

IL_021c:
	{
		float L_93;
		L_93 = JsonElement_GetSingle_m0F4CC322B96916B5F77259B9BDC523F301A42991((&V_0), NULL);
		float L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_defaults.single_class, &L_94);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_022e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		bool L_100;
		L_100 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_97, L_99, NULL);
		if (L_100)
		{
			goto IL_0264;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (!L_105)
		{
			goto IL_0276;
		}
	}

IL_0264:
	{
		uint32_t L_106;
		L_106 = JsonElement_GetUInt32_mD3E31244BC7A3FF44A58E823246C0C1A0C243CEA((&V_0), NULL);
		uint32_t L_107 = L_106;
		RuntimeObject* L_108 = Box(il2cpp_defaults.uint32_class, &L_107);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_108, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0276:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		bool L_113;
		L_113 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_110, L_112, NULL);
		if (L_113)
		{
			goto IL_02ac;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_02be;
		}
	}

IL_02ac:
	{
		uint16_t L_119;
		L_119 = JsonElement_GetUInt16_m641F42FA26FD197143A96A403638C9562828915C((&V_0), NULL);
		uint16_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_defaults.uint16_class, &L_120);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_02be:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (L_126)
		{
			goto IL_02f4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_0306;
		}
	}

IL_02f4:
	{
		uint64_t L_132;
		L_132 = JsonElement_GetUInt64_mF908D0DE0C6A308AC74306C6CC953FBC9AA3931D((&V_0), NULL);
		uint64_t L_133 = L_132;
		RuntimeObject* L_134 = Box(il2cpp_defaults.uint64_class, &L_133);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_134, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		bool L_139;
		L_139 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_136, L_138, NULL);
		if (L_139)
		{
			goto IL_033f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		bool L_144;
		L_144 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_141, L_143, NULL);
		if (!L_144)
		{
			goto IL_04f2;
		}
	}

IL_033f:
	{
		int8_t L_145;
		L_145 = JsonElement_GetSByte_m4298D16E69458AC80878131C2C341689F714FA19((&V_0), NULL);
		int8_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.sbyte_class, &L_146);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0351:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0379;
		}
	}
	{
		String_t* L_153;
		L_153 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_153, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0379:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (L_158)
		{
			goto IL_03af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		if (!L_163)
		{
			goto IL_03c1;
		}
	}

IL_03af:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_164;
		L_164 = JsonElement_GetDateTime_mAFA3DE8F3E1C93354929F73CEB73243A175D48CB((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_165 = L_164;
		RuntimeObject* L_166 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_165);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_166, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_03c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		bool L_171;
		L_171 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_168, L_170, NULL);
		if (L_171)
		{
			goto IL_03f7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_174 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_175;
		L_175 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_174, NULL);
		bool L_176;
		L_176 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_173, L_175, NULL);
		if (!L_176)
		{
			goto IL_0409;
		}
	}

IL_03f7:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_177;
		L_177 = JsonElement_GetDateTimeOffset_m4BC5D72139AA83336EC5E61737809DEAF379F227((&V_0), NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_178 = L_177;
		RuntimeObject* L_179 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_178);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0409:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_181;
		L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_183;
		L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
		bool L_184;
		L_184 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_181, L_183, NULL);
		if (L_184)
		{
			goto IL_043f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_186;
		L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_188;
		L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
		bool L_189;
		L_189 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_186, L_188, NULL);
		if (!L_189)
		{
			goto IL_0451;
		}
	}

IL_043f:
	{
		Guid_t L_190;
		L_190 = JsonElement_GetGuid_m023B14654E51753008C57E33759AEB291873BD61((&V_0), NULL);
		Guid_t L_191 = L_190;
		RuntimeObject* L_192 = Box(Guid_t_il2cpp_TypeInfo_var, &L_191);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_192, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0451:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_194;
		L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_195 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_196;
		L_196 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_195, NULL);
		bool L_197;
		L_197 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_194, L_196, NULL);
		if (L_197)
		{
			goto IL_0487;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_198 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_199;
		L_199 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_198, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_200 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_201;
		L_201 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_200, NULL);
		bool L_202;
		L_202 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_199, L_201, NULL);
		if (!L_202)
		{
			goto IL_04f2;
		}
	}

IL_0487:
	{
		String_t* L_203;
		L_203 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		V_2 = L_203;
		String_t* L_204 = V_2;
		NullCheck(L_204);
		int32_t L_205;
		L_205 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_204, NULL);
		if ((!(((uint32_t)L_205) == ((uint32_t)1))))
		{
			goto IL_04f2;
		}
	}
	{
		String_t* L_206 = V_2;
		NullCheck(L_206);
		Il2CppChar L_207;
		L_207 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_206, 0, NULL);
		Il2CppChar L_208 = L_207;
		RuntimeObject* L_209 = Box(il2cpp_defaults.char_class, &L_208);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_209, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_04aa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (L_214)
		{
			goto IL_04e0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_215 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_216;
		L_216 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_215, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_218;
		L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
		bool L_219;
		L_219 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_216, L_218, NULL);
		if (!L_219)
		{
			goto IL_04f2;
		}
	}

IL_04e0:
	{
		bool L_220;
		L_220 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_0), NULL);
		bool L_221 = L_220;
		RuntimeObject* L_222 = Box(il2cpp_defaults.boolean_class, &L_221);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_222, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_04f2:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_223;
		L_223 = SR_get_NodeUnableToConvertElement_mD0D5FA6963288CDFFD80E4C73C3C1EB3417E6123(NULL);
		uint8_t L_224;
		L_224 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		uint8_t L_225 = L_224;
		RuntimeObject* L_226 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValueKind_t86CF24FA22C77B3FB161CDE8C0842689DB648024_il2cpp_TypeInfo_var)), &L_225);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_227 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_228;
		L_228 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_227, NULL);
		String_t* L_229;
		L_229 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_223, L_226, (RuntimeObject*)L_228, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_230 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_230, L_229, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_230, method);
	}
}
// Method Definition Index: 63208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_GetValue_TisRuntimeObject_mA8737443C54F6EFE86A891213836034FB60D7F57_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___Value;
		V_1 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_0;
		return L_7;
	}

IL_0027:
	{
		int32_t L_8 = __this->___Value;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_9);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_11;
		L_11 = JsonValue_1_ConvertJsonElement_TisRuntimeObject_mD1E1A7F16ADDC8712EA87AE9B435ECED138D5F55(__this, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_11;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_12;
		L_12 = SR_get_NodeUnableToConvert_mD8A395244D268D08F2FC623B7A1AF20C99AFF7A2(NULL);
		int32_t L_13 = __this->___Value;
		V_1 = L_13;
		Il2CppFakeBox<int32_t> L_14(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (&V_1));
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_14), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_12, (RuntimeObject*)L_15, (RuntimeObject*)L_17, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}
}
// Method Definition Index: 63208
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF6074164F9D644F1BC2EFE7FE7DCDB2565B9E04_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		int32_t L_0 = __this->___Value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		bool* L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(bool*)L_16 = ((*(bool*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		bool* L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(bool*)L_32 = ((*(bool*)UnBox(L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		bool* L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(bool*)L_48 = ((*(bool*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		bool* L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(bool*)L_64 = ((*(bool*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		bool* L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(bool*)L_80 = ((*(bool*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		bool* L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(bool*)L_96 = ((*(bool*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		bool* L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(bool*)L_112 = ((*(bool*)UnBox(L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		bool* L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(bool*)L_128 = ((*(bool*)UnBox(L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		bool* L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(bool*)L_144 = ((*(bool*)UnBox(L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		bool* L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(bool*)L_160 = ((*(bool*)UnBox(L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		bool* L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(bool*)L_176 = ((*(bool*)UnBox(L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		bool* L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(bool*)L_187 = ((*(bool*)UnBox((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		bool* L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(bool*)L_200 = ((*(bool*)UnBox(L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		bool* L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(bool*)L_216 = ((*(bool*)UnBox(L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		bool* L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(bool*)L_232 = ((*(bool*)UnBox(L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		bool* L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(bool*)L_250 = ((*(bool*)UnBox(L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		bool* L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(bool*)L_265 = ((*(bool*)UnBox(L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		bool* L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD765CDA339158DA5BFFE7AD973DD8FF1053B3139_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		int32_t L_0 = __this->___Value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		int32_t* L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(int32_t*)L_16 = ((*(int32_t*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		int32_t* L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(int32_t*)L_32 = ((*(int32_t*)UnBox(L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		int32_t* L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(int32_t*)L_48 = ((*(int32_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		int32_t* L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(int32_t*)L_64 = ((*(int32_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		int32_t* L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(int32_t*)L_80 = ((*(int32_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		int32_t* L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(int32_t*)L_96 = ((*(int32_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		int32_t* L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(int32_t*)L_112 = ((*(int32_t*)UnBox(L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		int32_t* L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(int32_t*)L_128 = ((*(int32_t*)UnBox(L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		int32_t* L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(int32_t*)L_144 = ((*(int32_t*)UnBox(L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		int32_t* L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(int32_t*)L_160 = ((*(int32_t*)UnBox(L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		int32_t* L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(int32_t*)L_176 = ((*(int32_t*)UnBox(L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		int32_t* L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(int32_t*)L_187 = ((*(int32_t*)UnBox((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		int32_t* L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(int32_t*)L_200 = ((*(int32_t*)UnBox(L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		int32_t* L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(int32_t*)L_216 = ((*(int32_t*)UnBox(L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		int32_t* L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(int32_t*)L_232 = ((*(int32_t*)UnBox(L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		int32_t* L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(int32_t*)L_250 = ((*(int32_t*)UnBox(L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		int32_t* L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(int32_t*)L_265 = ((*(int32_t*)UnBox(L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		int32_t* L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0B92107E3863E53DC7719CFE784DA53881E735B6_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		int32_t L_0 = __this->___Value;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		RuntimeObject** L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(RuntimeObject**)L_16 = ((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		RuntimeObject** L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(RuntimeObject**)L_32 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_32, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		RuntimeObject** L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(RuntimeObject**)L_48 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_48, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		RuntimeObject** L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(RuntimeObject**)L_64 = ((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_64, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		RuntimeObject** L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		RuntimeObject** L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(RuntimeObject**)L_96 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_96, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		RuntimeObject** L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(RuntimeObject**)L_112 = ((RuntimeObject*)Castclass((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_112, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		RuntimeObject** L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(RuntimeObject**)L_128 = ((RuntimeObject*)Castclass((RuntimeObject*)L_131, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_128, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		RuntimeObject** L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(RuntimeObject**)L_144 = ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_144, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		RuntimeObject** L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(RuntimeObject**)L_160 = ((RuntimeObject*)Castclass((RuntimeObject*)L_163, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_160, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		RuntimeObject** L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(RuntimeObject**)L_176 = ((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_176, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		RuntimeObject** L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(RuntimeObject**)L_187 = ((RuntimeObject*)Castclass((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_187, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		RuntimeObject** L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(RuntimeObject**)L_200 = ((RuntimeObject*)Castclass((RuntimeObject*)L_203, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_200, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		RuntimeObject** L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(RuntimeObject**)L_216 = ((RuntimeObject*)Castclass((RuntimeObject*)L_219, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_216, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		RuntimeObject** L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(RuntimeObject**)L_232 = ((RuntimeObject*)Castclass((RuntimeObject*)L_235, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_232, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		RuntimeObject** L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(RuntimeObject**)L_250 = ((RuntimeObject*)Castclass((RuntimeObject*)L_254, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_250, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		RuntimeObject** L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(RuntimeObject**)L_265 = ((RuntimeObject*)Castclass((RuntimeObject*)L_268, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_265, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		RuntimeObject** L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mA188150DEE72248077E47AEE6EB09AC14F96BA13_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___Value;
		V_1 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((*(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		bool* L_7 = ___0_value;
		bool L_8 = V_0;
		*(bool*)L_7 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		int32_t L_9 = __this->___Value;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		bool* L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF6074164F9D644F1BC2EFE7FE7DCDB2565B9E04(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		bool* L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAC36F078713E319BA666CBB07A5D72B973BBBDE8_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___Value;
		V_1 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((*(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		int32_t* L_7 = ___0_value;
		int32_t L_8 = V_0;
		*(int32_t*)L_7 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		int32_t L_9 = __this->___Value;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD765CDA339158DA5BFFE7AD973DD8FF1053B3139(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		int32_t* L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisRuntimeObject_mDC73FE4FCE13438756D05BF0835C6C3E578E77C2_gshared (JsonValue_1_t9368092AB8580139AA6E0E2E39E72C9FF1202219* __this, RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___Value;
		V_1 = L_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject** L_7 = ___0_value;
		RuntimeObject* L_8 = V_0;
		*(RuntimeObject**)L_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)L_8);
		return (bool)1;
	}

IL_002e:
	{
		int32_t L_9 = __this->___Value;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject** L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0B92107E3863E53DC7719CFE784DA53881E735B6(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		RuntimeObject** L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
// Method Definition Index: 63211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m43115C2DF5D11C22B216BF6BE475D59AE8E275D8_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_0 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		V_1 = L_3;
		uint8_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_0351;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_04aa;
			}
			case 3:
			{
				goto IL_04aa;
			}
		}
	}
	{
		goto IL_04f2;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_007e;
		}
	}

IL_006c:
	{
		int32_t L_15;
		L_15 = JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73((&V_0), NULL);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_007e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		if (!L_27)
		{
			goto IL_00c6;
		}
	}

IL_00b4:
	{
		int64_t L_28;
		L_28 = JsonElement_GetInt64_m36B64100ED0C723424B67C43D9F3FFD3F7440071((&V_0), NULL);
		int64_t L_29 = L_28;
		RuntimeObject* L_30 = Box(il2cpp_defaults.int64_class, &L_29);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_30, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (L_35)
		{
			goto IL_00fc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_010e;
		}
	}

IL_00fc:
	{
		double L_41;
		L_41 = JsonElement_GetDouble_mE17DAB42B3F55ACCBC970F3466BCBB8951A326BF((&V_0), NULL);
		double L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_defaults.double_class, &L_42);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (L_48)
		{
			goto IL_0144;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_0156;
		}
	}

IL_0144:
	{
		int16_t L_54;
		L_54 = JsonElement_GetInt16_mBB39D07DCB65BCCA817A7D1169BBC7BD3F507D48((&V_0), NULL);
		int16_t L_55 = L_54;
		RuntimeObject* L_56 = Box(il2cpp_defaults.int16_class, &L_55);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0156:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
		if (L_61)
		{
			goto IL_018c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		bool L_66;
		L_66 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_63, L_65, NULL);
		if (!L_66)
		{
			goto IL_019e;
		}
	}

IL_018c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_67;
		L_67 = JsonElement_GetDecimal_m22272312D2021349A6EB7E2F9B7887C5F44ABCAE((&V_0), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_68 = L_67;
		RuntimeObject* L_69 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_68);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_69, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_019e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		bool L_74;
		L_74 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_73, NULL);
		if (L_74)
		{
			goto IL_01d4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		bool L_79;
		L_79 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_76, L_78, NULL);
		if (!L_79)
		{
			goto IL_01e6;
		}
	}

IL_01d4:
	{
		uint8_t L_80;
		L_80 = JsonElement_GetByte_m35643A5845F97071131C7F452B3752C5CA6E055E((&V_0), NULL);
		uint8_t L_81 = L_80;
		RuntimeObject* L_82 = Box(il2cpp_defaults.byte_class, &L_81);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_82, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_01e6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_84, L_86, NULL);
		if (L_87)
		{
			goto IL_021c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_022e;
		}
	}

IL_021c:
	{
		float L_93;
		L_93 = JsonElement_GetSingle_m0F4CC322B96916B5F77259B9BDC523F301A42991((&V_0), NULL);
		float L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_defaults.single_class, &L_94);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_95, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_022e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_98 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_99;
		L_99 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_98, NULL);
		bool L_100;
		L_100 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_97, L_99, NULL);
		if (L_100)
		{
			goto IL_0264;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (!L_105)
		{
			goto IL_0276;
		}
	}

IL_0264:
	{
		uint32_t L_106;
		L_106 = JsonElement_GetUInt32_mD3E31244BC7A3FF44A58E823246C0C1A0C243CEA((&V_0), NULL);
		uint32_t L_107 = L_106;
		RuntimeObject* L_108 = Box(il2cpp_defaults.uint32_class, &L_107);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_108, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0276:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		bool L_113;
		L_113 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_110, L_112, NULL);
		if (L_113)
		{
			goto IL_02ac;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_02be;
		}
	}

IL_02ac:
	{
		uint16_t L_119;
		L_119 = JsonElement_GetUInt16_m641F42FA26FD197143A96A403638C9562828915C((&V_0), NULL);
		uint16_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_defaults.uint16_class, &L_120);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_02be:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (L_126)
		{
			goto IL_02f4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_0306;
		}
	}

IL_02f4:
	{
		uint64_t L_132;
		L_132 = JsonElement_GetUInt64_mF908D0DE0C6A308AC74306C6CC953FBC9AA3931D((&V_0), NULL);
		uint64_t L_133 = L_132;
		RuntimeObject* L_134 = Box(il2cpp_defaults.uint64_class, &L_133);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_134, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		bool L_139;
		L_139 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_136, L_138, NULL);
		if (L_139)
		{
			goto IL_033f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_142 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_143;
		L_143 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_142, NULL);
		bool L_144;
		L_144 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_141, L_143, NULL);
		if (!L_144)
		{
			goto IL_04f2;
		}
	}

IL_033f:
	{
		int8_t L_145;
		L_145 = JsonElement_GetSByte_m4298D16E69458AC80878131C2C341689F714FA19((&V_0), NULL);
		int8_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.sbyte_class, &L_146);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0351:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0379;
		}
	}
	{
		String_t* L_153;
		L_153 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_153, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0379:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (L_158)
		{
			goto IL_03af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		if (!L_163)
		{
			goto IL_03c1;
		}
	}

IL_03af:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_164;
		L_164 = JsonElement_GetDateTime_mAFA3DE8F3E1C93354929F73CEB73243A175D48CB((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_165 = L_164;
		RuntimeObject* L_166 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_165);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_166, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_03c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		bool L_171;
		L_171 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_168, L_170, NULL);
		if (L_171)
		{
			goto IL_03f7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_174 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_175;
		L_175 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_174, NULL);
		bool L_176;
		L_176 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_173, L_175, NULL);
		if (!L_176)
		{
			goto IL_0409;
		}
	}

IL_03f7:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_177;
		L_177 = JsonElement_GetDateTimeOffset_m4BC5D72139AA83336EC5E61737809DEAF379F227((&V_0), NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_178 = L_177;
		RuntimeObject* L_179 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_178);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0409:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_181;
		L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_183;
		L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
		bool L_184;
		L_184 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_181, L_183, NULL);
		if (L_184)
		{
			goto IL_043f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_186;
		L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_188;
		L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
		bool L_189;
		L_189 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_186, L_188, NULL);
		if (!L_189)
		{
			goto IL_0451;
		}
	}

IL_043f:
	{
		Guid_t L_190;
		L_190 = JsonElement_GetGuid_m023B14654E51753008C57E33759AEB291873BD61((&V_0), NULL);
		Guid_t L_191 = L_190;
		RuntimeObject* L_192 = Box(Guid_t_il2cpp_TypeInfo_var, &L_191);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_192, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0451:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_194;
		L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_195 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_196;
		L_196 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_195, NULL);
		bool L_197;
		L_197 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_194, L_196, NULL);
		if (L_197)
		{
			goto IL_0487;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_198 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_199;
		L_199 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_198, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_200 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_201;
		L_201 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_200, NULL);
		bool L_202;
		L_202 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_199, L_201, NULL);
		if (!L_202)
		{
			goto IL_04f2;
		}
	}

IL_0487:
	{
		String_t* L_203;
		L_203 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		V_2 = L_203;
		String_t* L_204 = V_2;
		NullCheck(L_204);
		int32_t L_205;
		L_205 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_204, NULL);
		if ((!(((uint32_t)L_205) == ((uint32_t)1))))
		{
			goto IL_04f2;
		}
	}
	{
		String_t* L_206 = V_2;
		NullCheck(L_206);
		Il2CppChar L_207;
		L_207 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_206, 0, NULL);
		Il2CppChar L_208 = L_207;
		RuntimeObject* L_209 = Box(il2cpp_defaults.char_class, &L_208);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_209, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_04aa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (L_214)
		{
			goto IL_04e0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_215 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_216;
		L_216 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_215, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_218;
		L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
		bool L_219;
		L_219 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_216, L_218, NULL);
		if (!L_219)
		{
			goto IL_04f2;
		}
	}

IL_04e0:
	{
		bool L_220;
		L_220 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_0), NULL);
		bool L_221 = L_220;
		RuntimeObject* L_222 = Box(il2cpp_defaults.boolean_class, &L_221);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_222, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_04f2:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_223;
		L_223 = SR_get_NodeUnableToConvertElement_mD0D5FA6963288CDFFD80E4C73C3C1EB3417E6123(NULL);
		uint8_t L_224;
		L_224 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		uint8_t L_225 = L_224;
		RuntimeObject* L_226 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValueKind_t86CF24FA22C77B3FB161CDE8C0842689DB648024_il2cpp_TypeInfo_var)), &L_225);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_227 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_228;
		L_228 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_227, NULL);
		String_t* L_229;
		L_229 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_223, L_226, (RuntimeObject*)L_228, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_230 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_230, L_229, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_230, method);
	}
}
// Method Definition Index: 63208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_GetValue_TisRuntimeObject_m56473C4D27870BF9B5D0FF0AEC8F6BA986228F97_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		V_1 = L_0;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0027;
		}
	}
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_4 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_7 = V_0;
		return L_7;
	}

IL_0027:
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_8 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_9);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_11;
		L_11 = JsonValue_1_ConvertJsonElement_TisRuntimeObject_m43115C2DF5D11C22B216BF6BE475D59AE8E275D8(__this, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_11;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_12;
		L_12 = SR_get_NodeUnableToConvert_mD8A395244D268D08F2FC623B7A1AF20C99AFF7A2(NULL);
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_13 = __this->___Value;
		V_1 = L_13;
		Il2CppFakeBox<JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1> L_14(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (&V_1));
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((&L_14), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_12, (RuntimeObject*)L_15, (RuntimeObject*)L_17, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}
}
// Method Definition Index: 63208
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB64F1885B17F3AA9FB637D962D8E19BEC38E44F6_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		bool* L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(bool*)L_16 = ((*(bool*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		bool* L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(bool*)L_32 = ((*(bool*)UnBox(L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		bool* L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(bool*)L_48 = ((*(bool*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		bool* L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(bool*)L_64 = ((*(bool*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		bool* L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(bool*)L_80 = ((*(bool*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		bool* L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(bool*)L_96 = ((*(bool*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		bool* L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(bool*)L_112 = ((*(bool*)UnBox(L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		bool* L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(bool*)L_128 = ((*(bool*)UnBox(L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		bool* L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(bool*)L_144 = ((*(bool*)UnBox(L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		bool* L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(bool*)L_160 = ((*(bool*)UnBox(L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		bool* L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(bool*)L_176 = ((*(bool*)UnBox(L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		bool* L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(bool*)L_187 = ((*(bool*)UnBox((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		bool* L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(bool*)L_200 = ((*(bool*)UnBox(L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		bool* L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(bool*)L_216 = ((*(bool*)UnBox(L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		bool* L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(bool*)L_232 = ((*(bool*)UnBox(L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		bool* L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(bool*)L_250 = ((*(bool*)UnBox(L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		bool* L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(bool*)L_265 = ((*(bool*)UnBox(L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		bool* L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA5D0F975AA26A45988B219920E1A6AAEBF89F5C_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		int32_t* L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(int32_t*)L_16 = ((*(int32_t*)UnBox(L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		int32_t* L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(int32_t*)L_32 = ((*(int32_t*)UnBox(L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		int32_t* L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(int32_t*)L_48 = ((*(int32_t*)UnBox(L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		int32_t* L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(int32_t*)L_64 = ((*(int32_t*)UnBox(L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		int32_t* L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(int32_t*)L_80 = ((*(int32_t*)UnBox(L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		int32_t* L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(int32_t*)L_96 = ((*(int32_t*)UnBox(L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		int32_t* L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(int32_t*)L_112 = ((*(int32_t*)UnBox(L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		int32_t* L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(int32_t*)L_128 = ((*(int32_t*)UnBox(L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		int32_t* L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(int32_t*)L_144 = ((*(int32_t*)UnBox(L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		int32_t* L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(int32_t*)L_160 = ((*(int32_t*)UnBox(L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		int32_t* L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(int32_t*)L_176 = ((*(int32_t*)UnBox(L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		int32_t* L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(int32_t*)L_187 = ((*(int32_t*)UnBox((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		int32_t* L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(int32_t*)L_200 = ((*(int32_t*)UnBox(L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		int32_t* L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(int32_t*)L_216 = ((*(int32_t*)UnBox(L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		int32_t* L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(int32_t*)L_232 = ((*(int32_t*)UnBox(L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		int32_t* L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(int32_t*)L_250 = ((*(int32_t*)UnBox(L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		int32_t* L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(int32_t*)L_265 = ((*(int32_t*)UnBox(L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		int32_t* L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m99115B7B6584A8DFE3D234CD5B3027F4CDBC1648_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_1);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_2, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_3;
		L_3 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_3;
		uint8_t L_4 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_15;
		L_15 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_15;
		RuntimeObject** L_16 = ___0_result;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		*(RuntimeObject**)L_16 = ((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_20 = V_0;
		return L_20;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		bool L_30;
		L_30 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_27, L_29, NULL);
		if (!L_30)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_31;
		L_31 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_31;
		RuntimeObject** L_32 = ___0_result;
		int64_t L_33 = V_4;
		int64_t L_34 = L_33;
		RuntimeObject* L_35 = Box(il2cpp_defaults.int64_class, &L_34);
		*(RuntimeObject**)L_32 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_32, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_36 = V_0;
		return L_36;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_38, L_40, NULL);
		if (L_41)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_47;
		L_47 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_47;
		RuntimeObject** L_48 = ___0_result;
		double L_49 = V_5;
		double L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_defaults.double_class, &L_50);
		*(RuntimeObject**)L_48 = ((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_48, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_52 = V_0;
		return L_52;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		bool L_57;
		L_57 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_54, L_56, NULL);
		if (L_57)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (!L_62)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_63;
		L_63 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_63;
		RuntimeObject** L_64 = ___0_result;
		int16_t L_65 = V_6;
		int16_t L_66 = L_65;
		RuntimeObject* L_67 = Box(il2cpp_defaults.int16_class, &L_66);
		*(RuntimeObject**)L_64 = ((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_64, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_68 = V_0;
		return L_68;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (L_73)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		bool L_78;
		L_78 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_75, L_77, NULL);
		if (!L_78)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_79;
		L_79 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_79;
		RuntimeObject** L_80 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_81 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = L_81;
		RuntimeObject* L_83 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_82);
		*(RuntimeObject**)L_80 = ((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_80, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_83, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_84 = V_0;
		return L_84;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (L_89)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		bool L_94;
		L_94 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_91, L_93, NULL);
		if (!L_94)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_95;
		L_95 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_95;
		RuntimeObject** L_96 = ___0_result;
		uint8_t L_97 = V_8;
		uint8_t L_98 = L_97;
		RuntimeObject* L_99 = Box(il2cpp_defaults.byte_class, &L_98);
		*(RuntimeObject**)L_96 = ((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_96, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_99, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_100 = V_0;
		return L_100;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		bool L_105;
		L_105 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_102, L_104, NULL);
		if (L_105)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_111;
		L_111 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_111;
		RuntimeObject** L_112 = ___0_result;
		float L_113 = V_9;
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(il2cpp_defaults.single_class, &L_114);
		*(RuntimeObject**)L_112 = ((RuntimeObject*)Castclass((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_112, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_115, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_116 = V_0;
		return L_116;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (L_121)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		bool L_126;
		L_126 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_123, L_125, NULL);
		if (!L_126)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_127;
		L_127 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_127;
		RuntimeObject** L_128 = ___0_result;
		uint32_t L_129 = V_10;
		uint32_t L_130 = L_129;
		RuntimeObject* L_131 = Box(il2cpp_defaults.uint32_class, &L_130);
		*(RuntimeObject**)L_128 = ((RuntimeObject*)Castclass((RuntimeObject*)L_131, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_128, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_131, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_132 = V_0;
		return L_132;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_143;
		L_143 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_143;
		RuntimeObject** L_144 = ___0_result;
		uint16_t L_145 = V_11;
		uint16_t L_146 = L_145;
		RuntimeObject* L_147 = Box(il2cpp_defaults.uint16_class, &L_146);
		*(RuntimeObject**)L_144 = ((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_144, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_147, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_148 = V_0;
		return L_148;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		bool L_153;
		L_153 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_150, L_152, NULL);
		if (L_153)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (!L_158)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_159;
		L_159 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_159;
		RuntimeObject** L_160 = ___0_result;
		uint64_t L_161 = V_12;
		uint64_t L_162 = L_161;
		RuntimeObject* L_163 = Box(il2cpp_defaults.uint64_class, &L_162);
		*(RuntimeObject**)L_160 = ((RuntimeObject*)Castclass((RuntimeObject*)L_163, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_160, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_163, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_164 = V_0;
		return L_164;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_175;
		L_175 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_175;
		RuntimeObject** L_176 = ___0_result;
		int8_t L_177 = V_13;
		int8_t L_178 = L_177;
		RuntimeObject* L_179 = Box(il2cpp_defaults.sbyte_class, &L_178);
		*(RuntimeObject**)L_176 = ((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_176, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_179, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_180 = V_0;
		return L_180;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		bool L_185;
		L_185 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_182, L_184, NULL);
		if (!L_185)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_186;
		L_186 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_186;
		RuntimeObject** L_187 = ___0_result;
		String_t* L_188 = V_14;
		*(RuntimeObject**)L_187 = ((RuntimeObject*)Castclass((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_187, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_188, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (L_193)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		bool L_198;
		L_198 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_195, L_197, NULL);
		if (!L_198)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_199;
		L_199 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_199;
		RuntimeObject** L_200 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_201 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_202 = L_201;
		RuntimeObject* L_203 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_202);
		*(RuntimeObject**)L_200 = ((RuntimeObject*)Castclass((RuntimeObject*)L_203, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_200, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_203, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_204 = V_0;
		return L_204;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		bool L_209;
		L_209 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_206, L_208, NULL);
		if (L_209)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		bool L_214;
		L_214 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_211, L_213, NULL);
		if (!L_214)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_215;
		L_215 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_215;
		RuntimeObject** L_216 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_217 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_218 = L_217;
		RuntimeObject* L_219 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_218);
		*(RuntimeObject**)L_216 = ((RuntimeObject*)Castclass((RuntimeObject*)L_219, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_216, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_219, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_220 = V_0;
		return L_220;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_223 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_224;
		L_224 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_223, NULL);
		bool L_225;
		L_225 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_222, L_224, NULL);
		if (L_225)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_228 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_229;
		L_229 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_228, NULL);
		bool L_230;
		L_230 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_227, L_229, NULL);
		if (!L_230)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_231;
		L_231 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_231;
		RuntimeObject** L_232 = ___0_result;
		Guid_t L_233 = V_17;
		Guid_t L_234 = L_233;
		RuntimeObject* L_235 = Box(Guid_t_il2cpp_TypeInfo_var, &L_234);
		*(RuntimeObject**)L_232 = ((RuntimeObject*)Castclass((RuntimeObject*)L_235, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_232, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_235, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_236 = V_0;
		return L_236;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_239 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_240;
		L_240 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_239, NULL);
		bool L_241;
		L_241 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_238, L_240, NULL);
		if (L_241)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_244 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_245;
		L_245 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_244, NULL);
		bool L_246;
		L_246 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_243, L_245, NULL);
		if (!L_246)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_247;
		L_247 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_247;
		String_t* L_248 = V_18;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_248, NULL);
		if ((!(((uint32_t)L_249) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		RuntimeObject** L_250 = ___0_result;
		String_t* L_251 = V_18;
		NullCheck(L_251);
		Il2CppChar L_252;
		L_252 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_251, 0, NULL);
		Il2CppChar L_253 = L_252;
		RuntimeObject* L_254 = Box(il2cpp_defaults.char_class, &L_253);
		*(RuntimeObject**)L_250 = ((RuntimeObject*)Castclass((RuntimeObject*)L_254, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_250, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_254, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		bool L_259;
		L_259 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_256, L_258, NULL);
		if (L_259)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_262 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_263;
		L_263 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_262, NULL);
		bool L_264;
		L_264 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_261, L_263, NULL);
		if (!L_264)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		RuntimeObject** L_265 = ___0_result;
		bool L_266;
		L_266 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_267 = L_266;
		RuntimeObject* L_268 = Box(il2cpp_defaults.boolean_class, &L_267);
		*(RuntimeObject**)L_265 = ((RuntimeObject*)Castclass((RuntimeObject*)L_268, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_265, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_268, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		RuntimeObject** L_269 = ___0_result;
		il2cpp_codegen_initobj(L_269, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB7C6D231B9A186E5CC6E25A7E94910F0C57C87FF_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		V_1 = L_0;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_4 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((*(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		bool* L_7 = ___0_value;
		bool L_8 = V_0;
		*(bool*)L_7 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_9 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		bool* L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB64F1885B17F3AA9FB637D962D8E19BEC38E44F6(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		bool* L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF11DAA58BD85DA6046BA43C163D02A837BBFC601_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		V_1 = L_0;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_4 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((*(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		int32_t* L_7 = ___0_value;
		int32_t L_8 = V_0;
		*(int32_t*)L_7 = L_8;
		return (bool)1;
	}

IL_002e:
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_9 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBA5D0F975AA26A45988B219920E1A6AAEBF89F5C(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		int32_t* L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisRuntimeObject_mAB48E6EE7AA0496996D9DE9B482CCF26C92798A8_gshared (JsonValue_1_tD719FDCBC7EE4B4D5DABC047A917CF42DEFB404D* __this, RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_0 = __this->___Value;
		V_1 = L_0;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_1 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_2);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_4 = V_1;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject** L_7 = ___0_value;
		RuntimeObject* L_8 = V_0;
		*(RuntimeObject**)L_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)L_8);
		return (bool)1;
	}

IL_002e:
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_9 = __this->___Value;
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_10 = L_9;
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), &L_10);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject** L_12 = ___0_value;
		bool L_13;
		L_13 = JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m99115B7B6584A8DFE3D234CD5B3027F4CDBC1648(__this, L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_13;
	}

IL_0048:
	{
		RuntimeObject** L_14 = ___0_value;
		il2cpp_codegen_initobj(L_14, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
// Method Definition Index: 63211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_ConvertJsonElement_TisRuntimeObject_m5745419E70BAC382D35044BE314AB4360B5871BC_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_0 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_0, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_1;
		L_1 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		V_1 = L_1;
		uint8_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_0351;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_04aa;
			}
			case 3:
			{
				goto IL_04aa;
			}
		}
	}
	{
		goto IL_04f2;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_007e;
		}
	}

IL_006c:
	{
		int32_t L_13;
		L_13 = JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73((&V_0), NULL);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_007e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_00c6;
		}
	}

IL_00b4:
	{
		int64_t L_26;
		L_26 = JsonElement_GetInt64_m36B64100ED0C723424B67C43D9F3FFD3F7440071((&V_0), NULL);
		int64_t L_27 = L_26;
		RuntimeObject* L_28 = Box(il2cpp_defaults.int64_class, &L_27);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_28, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		if (L_33)
		{
			goto IL_00fc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (!L_38)
		{
			goto IL_010e;
		}
	}

IL_00fc:
	{
		double L_39;
		L_39 = JsonElement_GetDouble_mE17DAB42B3F55ACCBC970F3466BCBB8951A326BF((&V_0), NULL);
		double L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_defaults.double_class, &L_40);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (L_46)
		{
			goto IL_0144;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		bool L_51;
		L_51 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_48, L_50, NULL);
		if (!L_51)
		{
			goto IL_0156;
		}
	}

IL_0144:
	{
		int16_t L_52;
		L_52 = JsonElement_GetInt16_mBB39D07DCB65BCCA817A7D1169BBC7BD3F507D48((&V_0), NULL);
		int16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_defaults.int16_class, &L_53);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_54, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0156:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (L_59)
		{
			goto IL_018c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		bool L_64;
		L_64 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_61, L_63, NULL);
		if (!L_64)
		{
			goto IL_019e;
		}
	}

IL_018c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_65;
		L_65 = JsonElement_GetDecimal_m22272312D2021349A6EB7E2F9B7887C5F44ABCAE((&V_0), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_66 = L_65;
		RuntimeObject* L_67 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_66);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_019e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (L_72)
		{
			goto IL_01d4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_73 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_74;
		L_74 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_73, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_75 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_76;
		L_76 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_75, NULL);
		bool L_77;
		L_77 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_74, L_76, NULL);
		if (!L_77)
		{
			goto IL_01e6;
		}
	}

IL_01d4:
	{
		uint8_t L_78;
		L_78 = JsonElement_GetByte_m35643A5845F97071131C7F452B3752C5CA6E055E((&V_0), NULL);
		uint8_t L_79 = L_78;
		RuntimeObject* L_80 = Box(il2cpp_defaults.byte_class, &L_79);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_01e6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (L_85)
		{
			goto IL_021c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_87, L_89, NULL);
		if (!L_90)
		{
			goto IL_022e;
		}
	}

IL_021c:
	{
		float L_91;
		L_91 = JsonElement_GetSingle_m0F4CC322B96916B5F77259B9BDC523F301A42991((&V_0), NULL);
		float L_92 = L_91;
		RuntimeObject* L_93 = Box(il2cpp_defaults.single_class, &L_92);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_93, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_022e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (L_98)
		{
			goto IL_0264;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0276;
		}
	}

IL_0264:
	{
		uint32_t L_104;
		L_104 = JsonElement_GetUInt32_mD3E31244BC7A3FF44A58E823246C0C1A0C243CEA((&V_0), NULL);
		uint32_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_defaults.uint32_class, &L_105);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_106, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0276:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_107 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_108;
		L_108 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_107, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		bool L_111;
		L_111 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_108, L_110, NULL);
		if (L_111)
		{
			goto IL_02ac;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		if (!L_116)
		{
			goto IL_02be;
		}
	}

IL_02ac:
	{
		uint16_t L_117;
		L_117 = JsonElement_GetUInt16_m641F42FA26FD197143A96A403638C9562828915C((&V_0), NULL);
		uint16_t L_118 = L_117;
		RuntimeObject* L_119 = Box(il2cpp_defaults.uint16_class, &L_118);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_119, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_02be:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		if (L_124)
		{
			goto IL_02f4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_125 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_126;
		L_126 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_125, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		bool L_129;
		L_129 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_126, L_128, NULL);
		if (!L_129)
		{
			goto IL_0306;
		}
	}

IL_02f4:
	{
		uint64_t L_130;
		L_130 = JsonElement_GetUInt64_mF908D0DE0C6A308AC74306C6CC953FBC9AA3931D((&V_0), NULL);
		uint64_t L_131 = L_130;
		RuntimeObject* L_132 = Box(il2cpp_defaults.uint64_class, &L_131);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_132, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (L_137)
		{
			goto IL_033f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_139, L_141, NULL);
		if (!L_142)
		{
			goto IL_04f2;
		}
	}

IL_033f:
	{
		int8_t L_143;
		L_143 = JsonElement_GetSByte_m4298D16E69458AC80878131C2C341689F714FA19((&V_0), NULL);
		int8_t L_144 = L_143;
		RuntimeObject* L_145 = Box(il2cpp_defaults.sbyte_class, &L_144);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_145, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0351:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_147;
		L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		bool L_150;
		L_150 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_147, L_149, NULL);
		if (!L_150)
		{
			goto IL_0379;
		}
	}
	{
		String_t* L_151;
		L_151 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_151, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0379:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (L_156)
		{
			goto IL_03af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_157 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_158;
		L_158 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_157, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		bool L_161;
		L_161 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_158, L_160, NULL);
		if (!L_161)
		{
			goto IL_03c1;
		}
	}

IL_03af:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_162;
		L_162 = JsonElement_GetDateTime_mAFA3DE8F3E1C93354929F73CEB73243A175D48CB((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_163 = L_162;
		RuntimeObject* L_164 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_163);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_164, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_03c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_167 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_168;
		L_168 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_167, NULL);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_166, L_168, NULL);
		if (L_169)
		{
			goto IL_03f7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_172 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_173;
		L_173 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_172, NULL);
		bool L_174;
		L_174 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_171, L_173, NULL);
		if (!L_174)
		{
			goto IL_0409;
		}
	}

IL_03f7:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_175;
		L_175 = JsonElement_GetDateTimeOffset_m4BC5D72139AA83336EC5E61737809DEAF379F227((&V_0), NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_176 = L_175;
		RuntimeObject* L_177 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_176);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0409:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_178 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_179;
		L_179 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_178, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_180 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_181;
		L_181 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_180, NULL);
		bool L_182;
		L_182 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_179, L_181, NULL);
		if (L_182)
		{
			goto IL_043f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_183 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_184;
		L_184 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_183, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_185 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_186;
		L_186 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_185, NULL);
		bool L_187;
		L_187 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_184, L_186, NULL);
		if (!L_187)
		{
			goto IL_0451;
		}
	}

IL_043f:
	{
		Guid_t L_188;
		L_188 = JsonElement_GetGuid_m023B14654E51753008C57E33759AEB291873BD61((&V_0), NULL);
		Guid_t L_189 = L_188;
		RuntimeObject* L_190 = Box(Guid_t_il2cpp_TypeInfo_var, &L_189);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_190, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0451:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_194;
		L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
		bool L_195;
		L_195 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_192, L_194, NULL);
		if (L_195)
		{
			goto IL_0487;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_196 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_197;
		L_197 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_196, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_198 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_199;
		L_199 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_198, NULL);
		bool L_200;
		L_200 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_197, L_199, NULL);
		if (!L_200)
		{
			goto IL_04f2;
		}
	}

IL_0487:
	{
		String_t* L_201;
		L_201 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		V_2 = L_201;
		String_t* L_202 = V_2;
		NullCheck(L_202);
		int32_t L_203;
		L_203 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_202, NULL);
		if ((!(((uint32_t)L_203) == ((uint32_t)1))))
		{
			goto IL_04f2;
		}
	}
	{
		String_t* L_204 = V_2;
		NullCheck(L_204);
		Il2CppChar L_205;
		L_205 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_204, 0, NULL);
		Il2CppChar L_206 = L_205;
		RuntimeObject* L_207 = Box(il2cpp_defaults.char_class, &L_206);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_207, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_04aa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_208 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_209;
		L_209 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_208, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		bool L_212;
		L_212 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_209, L_211, NULL);
		if (L_212)
		{
			goto IL_04e0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_213 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_214;
		L_214 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_213, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_215 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_216;
		L_216 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_215, NULL);
		bool L_217;
		L_217 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_214, L_216, NULL);
		if (!L_217)
		{
			goto IL_04f2;
		}
	}

IL_04e0:
	{
		bool L_218;
		L_218 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_0), NULL);
		bool L_219 = L_218;
		RuntimeObject* L_220 = Box(il2cpp_defaults.boolean_class, &L_219);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_220, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_04f2:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_221;
		L_221 = SR_get_NodeUnableToConvertElement_mD0D5FA6963288CDFFD80E4C73C3C1EB3417E6123(NULL);
		uint8_t L_222;
		L_222 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		uint8_t L_223 = L_222;
		RuntimeObject* L_224 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValueKind_t86CF24FA22C77B3FB161CDE8C0842689DB648024_il2cpp_TypeInfo_var)), &L_223);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_225 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_226;
		L_226 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_225, NULL);
		String_t* L_227;
		L_227 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_221, L_224, (RuntimeObject*)L_226, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_228 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_228, L_227, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_228, method);
	}
}
// Method Definition Index: 63208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonValue_1_GetValue_TisRuntimeObject_mDC7B93442AE81D36D84459F84F5BB4073C23D827_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0027:
	{
		RuntimeObject* L_4 = __this->___Value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = JsonValue_1_ConvertJsonElement_TisRuntimeObject_m5745419E70BAC382D35044BE314AB4360B5871BC(__this, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_6;
		L_6 = SR_get_NodeUnableToConvert_mD8A395244D268D08F2FC623B7A1AF20C99AFF7A2(NULL);
		RuntimeObject* L_7 = __this->___Value;
		V_1 = L_7;
		NullCheck((V_1));
		Type_t* L_8;
		L_8 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		String_t* L_11;
		L_11 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_6, (RuntimeObject*)L_8, (RuntimeObject*)L_10, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}
}
// Method Definition Index: 63208
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDD27C6ACF77B35A7B6CE12E56E08CE62682C3DDC_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_0, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_1;
		L_1 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_1;
		uint8_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_13;
		L_13 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_13;
		bool* L_14 = ___0_result;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		*(bool*)L_14 = ((*(bool*)UnBox(L_17, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_18 = V_0;
		return L_18;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_29;
		L_29 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_29;
		bool* L_30 = ___0_result;
		int64_t L_31 = V_4;
		int64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_defaults.int64_class, &L_32);
		*(bool*)L_30 = ((*(bool*)UnBox(L_33, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_34 = V_0;
		return L_34;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (L_39)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_45;
		L_45 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_45;
		bool* L_46 = ___0_result;
		double L_47 = V_5;
		double L_48 = L_47;
		RuntimeObject* L_49 = Box(il2cpp_defaults.double_class, &L_48);
		*(bool*)L_46 = ((*(bool*)UnBox(L_49, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_50 = V_0;
		return L_50;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		bool L_55;
		L_55 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_52, L_54, NULL);
		if (L_55)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_61;
		L_61 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_61;
		bool* L_62 = ___0_result;
		int16_t L_63 = V_6;
		int16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_defaults.int16_class, &L_64);
		*(bool*)L_62 = ((*(bool*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_66 = V_0;
		return L_66;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		bool L_71;
		L_71 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_70, NULL);
		if (L_71)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_77;
		L_77 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_77;
		bool* L_78 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_79 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_80 = L_79;
		RuntimeObject* L_81 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_80);
		*(bool*)L_78 = ((*(bool*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_82 = V_0;
		return L_82;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_84, L_86, NULL);
		if (L_87)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_93;
		L_93 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_93;
		bool* L_94 = ___0_result;
		uint8_t L_95 = V_8;
		uint8_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_defaults.byte_class, &L_96);
		*(bool*)L_94 = ((*(bool*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_98 = V_0;
		return L_98;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (L_103)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_109;
		L_109 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_109;
		bool* L_110 = ___0_result;
		float L_111 = V_9;
		float L_112 = L_111;
		RuntimeObject* L_113 = Box(il2cpp_defaults.single_class, &L_112);
		*(bool*)L_110 = ((*(bool*)UnBox(L_113, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_114 = V_0;
		return L_114;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		bool L_119;
		L_119 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_116, L_118, NULL);
		if (L_119)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		if (!L_124)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_125;
		L_125 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_125;
		bool* L_126 = ___0_result;
		uint32_t L_127 = V_10;
		uint32_t L_128 = L_127;
		RuntimeObject* L_129 = Box(il2cpp_defaults.uint32_class, &L_128);
		*(bool*)L_126 = ((*(bool*)UnBox(L_129, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_130 = V_0;
		return L_130;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		bool L_135;
		L_135 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_132, L_134, NULL);
		if (L_135)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_141;
		L_141 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_141;
		bool* L_142 = ___0_result;
		uint16_t L_143 = V_11;
		uint16_t L_144 = L_143;
		RuntimeObject* L_145 = Box(il2cpp_defaults.uint16_class, &L_144);
		*(bool*)L_142 = ((*(bool*)UnBox(L_145, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_146 = V_0;
		return L_146;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		bool L_151;
		L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
		if (L_151)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_157;
		L_157 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_157;
		bool* L_158 = ___0_result;
		uint64_t L_159 = V_12;
		uint64_t L_160 = L_159;
		RuntimeObject* L_161 = Box(il2cpp_defaults.uint64_class, &L_160);
		*(bool*)L_158 = ((*(bool*)UnBox(L_161, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_162 = V_0;
		return L_162;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_164;
		L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		bool L_167;
		L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
		if (L_167)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		bool L_172;
		L_172 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_169, L_171, NULL);
		if (!L_172)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_173;
		L_173 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_173;
		bool* L_174 = ___0_result;
		int8_t L_175 = V_13;
		int8_t L_176 = L_175;
		RuntimeObject* L_177 = Box(il2cpp_defaults.sbyte_class, &L_176);
		*(bool*)L_174 = ((*(bool*)UnBox(L_177, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_178 = V_0;
		return L_178;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_184;
		L_184 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_184;
		bool* L_185 = ___0_result;
		String_t* L_186 = V_14;
		*(bool*)L_185 = ((*(bool*)UnBox((RuntimeObject*)L_186, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_188;
		L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		bool L_191;
		L_191 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_188, L_190, NULL);
		if (L_191)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		bool L_196;
		L_196 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_193, L_195, NULL);
		if (!L_196)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_197;
		L_197 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_197;
		bool* L_198 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_199 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_200 = L_199;
		RuntimeObject* L_201 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_200);
		*(bool*)L_198 = ((*(bool*)UnBox(L_201, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_202 = V_0;
		return L_202;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_203 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_204;
		L_204 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_203, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		bool L_207;
		L_207 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_204, L_206, NULL);
		if (L_207)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_208 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_209;
		L_209 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_208, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		bool L_212;
		L_212 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_209, L_211, NULL);
		if (!L_212)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_213;
		L_213 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_213;
		bool* L_214 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_215 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_216 = L_215;
		RuntimeObject* L_217 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_216);
		*(bool*)L_214 = ((*(bool*)UnBox(L_217, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_218 = V_0;
		return L_218;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_219 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_220;
		L_220 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_219, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		bool L_223;
		L_223 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_220, L_222, NULL);
		if (L_223)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_229;
		L_229 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_229;
		bool* L_230 = ___0_result;
		Guid_t L_231 = V_17;
		Guid_t L_232 = L_231;
		RuntimeObject* L_233 = Box(Guid_t_il2cpp_TypeInfo_var, &L_232);
		*(bool*)L_230 = ((*(bool*)UnBox(L_233, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_234 = V_0;
		return L_234;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_235 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_236;
		L_236 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_235, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		bool L_239;
		L_239 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_236, L_238, NULL);
		if (L_239)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_240 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_241;
		L_241 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_240, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		bool L_244;
		L_244 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_241, L_243, NULL);
		if (!L_244)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_245;
		L_245 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_245;
		String_t* L_246 = V_18;
		NullCheck(L_246);
		int32_t L_247;
		L_247 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_246, NULL);
		if ((!(((uint32_t)L_247) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		bool* L_248 = ___0_result;
		String_t* L_249 = V_18;
		NullCheck(L_249);
		Il2CppChar L_250;
		L_250 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_249, 0, NULL);
		Il2CppChar L_251 = L_250;
		RuntimeObject* L_252 = Box(il2cpp_defaults.char_class, &L_251);
		*(bool*)L_248 = ((*(bool*)UnBox(L_252, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_253 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_254;
		L_254 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_253, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		bool L_257;
		L_257 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_254, L_256, NULL);
		if (L_257)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_258 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_259;
		L_259 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_258, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		bool L_262;
		L_262 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_259, L_261, NULL);
		if (!L_262)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		bool* L_263 = ___0_result;
		bool L_264;
		L_264 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_265 = L_264;
		RuntimeObject* L_266 = Box(il2cpp_defaults.boolean_class, &L_265);
		*(bool*)L_263 = ((*(bool*)UnBox(L_266, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		bool* L_267 = ___0_result;
		il2cpp_codegen_initobj(L_267, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43D87972FE6078DB969F068850E708E7EAE2D29B_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_0, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_1;
		L_1 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_1;
		uint8_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_13;
		L_13 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_13;
		int32_t* L_14 = ___0_result;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		*(int32_t*)L_14 = ((*(int32_t*)UnBox(L_17, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_18 = V_0;
		return L_18;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_29;
		L_29 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_29;
		int32_t* L_30 = ___0_result;
		int64_t L_31 = V_4;
		int64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_defaults.int64_class, &L_32);
		*(int32_t*)L_30 = ((*(int32_t*)UnBox(L_33, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_34 = V_0;
		return L_34;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (L_39)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_45;
		L_45 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_45;
		int32_t* L_46 = ___0_result;
		double L_47 = V_5;
		double L_48 = L_47;
		RuntimeObject* L_49 = Box(il2cpp_defaults.double_class, &L_48);
		*(int32_t*)L_46 = ((*(int32_t*)UnBox(L_49, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_50 = V_0;
		return L_50;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		bool L_55;
		L_55 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_52, L_54, NULL);
		if (L_55)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_61;
		L_61 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_61;
		int32_t* L_62 = ___0_result;
		int16_t L_63 = V_6;
		int16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_defaults.int16_class, &L_64);
		*(int32_t*)L_62 = ((*(int32_t*)UnBox(L_65, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_66 = V_0;
		return L_66;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		bool L_71;
		L_71 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_70, NULL);
		if (L_71)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_77;
		L_77 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_77;
		int32_t* L_78 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_79 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_80 = L_79;
		RuntimeObject* L_81 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_80);
		*(int32_t*)L_78 = ((*(int32_t*)UnBox(L_81, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_82 = V_0;
		return L_82;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_84, L_86, NULL);
		if (L_87)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_93;
		L_93 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_93;
		int32_t* L_94 = ___0_result;
		uint8_t L_95 = V_8;
		uint8_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_defaults.byte_class, &L_96);
		*(int32_t*)L_94 = ((*(int32_t*)UnBox(L_97, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_98 = V_0;
		return L_98;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (L_103)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_109;
		L_109 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_109;
		int32_t* L_110 = ___0_result;
		float L_111 = V_9;
		float L_112 = L_111;
		RuntimeObject* L_113 = Box(il2cpp_defaults.single_class, &L_112);
		*(int32_t*)L_110 = ((*(int32_t*)UnBox(L_113, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_114 = V_0;
		return L_114;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		bool L_119;
		L_119 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_116, L_118, NULL);
		if (L_119)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		if (!L_124)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_125;
		L_125 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_125;
		int32_t* L_126 = ___0_result;
		uint32_t L_127 = V_10;
		uint32_t L_128 = L_127;
		RuntimeObject* L_129 = Box(il2cpp_defaults.uint32_class, &L_128);
		*(int32_t*)L_126 = ((*(int32_t*)UnBox(L_129, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_130 = V_0;
		return L_130;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		bool L_135;
		L_135 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_132, L_134, NULL);
		if (L_135)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_141;
		L_141 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_141;
		int32_t* L_142 = ___0_result;
		uint16_t L_143 = V_11;
		uint16_t L_144 = L_143;
		RuntimeObject* L_145 = Box(il2cpp_defaults.uint16_class, &L_144);
		*(int32_t*)L_142 = ((*(int32_t*)UnBox(L_145, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_146 = V_0;
		return L_146;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		bool L_151;
		L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
		if (L_151)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_157;
		L_157 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_157;
		int32_t* L_158 = ___0_result;
		uint64_t L_159 = V_12;
		uint64_t L_160 = L_159;
		RuntimeObject* L_161 = Box(il2cpp_defaults.uint64_class, &L_160);
		*(int32_t*)L_158 = ((*(int32_t*)UnBox(L_161, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_162 = V_0;
		return L_162;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_164;
		L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		bool L_167;
		L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
		if (L_167)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		bool L_172;
		L_172 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_169, L_171, NULL);
		if (!L_172)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_173;
		L_173 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_173;
		int32_t* L_174 = ___0_result;
		int8_t L_175 = V_13;
		int8_t L_176 = L_175;
		RuntimeObject* L_177 = Box(il2cpp_defaults.sbyte_class, &L_176);
		*(int32_t*)L_174 = ((*(int32_t*)UnBox(L_177, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_178 = V_0;
		return L_178;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_184;
		L_184 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_184;
		int32_t* L_185 = ___0_result;
		String_t* L_186 = V_14;
		*(int32_t*)L_185 = ((*(int32_t*)UnBox((RuntimeObject*)L_186, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_188;
		L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		bool L_191;
		L_191 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_188, L_190, NULL);
		if (L_191)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		bool L_196;
		L_196 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_193, L_195, NULL);
		if (!L_196)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_197;
		L_197 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_197;
		int32_t* L_198 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_199 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_200 = L_199;
		RuntimeObject* L_201 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_200);
		*(int32_t*)L_198 = ((*(int32_t*)UnBox(L_201, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_202 = V_0;
		return L_202;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_203 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_204;
		L_204 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_203, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		bool L_207;
		L_207 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_204, L_206, NULL);
		if (L_207)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_208 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_209;
		L_209 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_208, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		bool L_212;
		L_212 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_209, L_211, NULL);
		if (!L_212)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_213;
		L_213 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_213;
		int32_t* L_214 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_215 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_216 = L_215;
		RuntimeObject* L_217 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_216);
		*(int32_t*)L_214 = ((*(int32_t*)UnBox(L_217, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_218 = V_0;
		return L_218;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_219 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_220;
		L_220 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_219, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		bool L_223;
		L_223 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_220, L_222, NULL);
		if (L_223)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_229;
		L_229 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_229;
		int32_t* L_230 = ___0_result;
		Guid_t L_231 = V_17;
		Guid_t L_232 = L_231;
		RuntimeObject* L_233 = Box(Guid_t_il2cpp_TypeInfo_var, &L_232);
		*(int32_t*)L_230 = ((*(int32_t*)UnBox(L_233, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_234 = V_0;
		return L_234;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_235 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_236;
		L_236 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_235, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		bool L_239;
		L_239 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_236, L_238, NULL);
		if (L_239)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_240 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_241;
		L_241 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_240, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		bool L_244;
		L_244 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_241, L_243, NULL);
		if (!L_244)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_245;
		L_245 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_245;
		String_t* L_246 = V_18;
		NullCheck(L_246);
		int32_t L_247;
		L_247 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_246, NULL);
		if ((!(((uint32_t)L_247) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		int32_t* L_248 = ___0_result;
		String_t* L_249 = V_18;
		NullCheck(L_249);
		Il2CppChar L_250;
		L_250 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_249, 0, NULL);
		Il2CppChar L_251 = L_250;
		RuntimeObject* L_252 = Box(il2cpp_defaults.char_class, &L_251);
		*(int32_t*)L_248 = ((*(int32_t*)UnBox(L_252, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_253 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_254;
		L_254 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_253, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		bool L_257;
		L_257 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_254, L_256, NULL);
		if (L_257)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_258 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_259;
		L_259 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_258, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		bool L_262;
		L_262 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_259, L_261, NULL);
		if (!L_262)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		int32_t* L_263 = ___0_result;
		bool L_264;
		L_264 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_265 = L_264;
		RuntimeObject* L_266 = Box(il2cpp_defaults.boolean_class, &L_265);
		*(int32_t*)L_263 = ((*(int32_t*)UnBox(L_266, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		int32_t* L_267 = ___0_result;
		il2cpp_codegen_initobj(L_267, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0E82F3908753351C411210BF1B161AB0606FDEE7_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_0, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_1;
		L_1 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_1;
		uint8_t L_2 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_13;
		L_13 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_13;
		RuntimeObject** L_14 = ___0_result;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(il2cpp_defaults.int32_class, &L_16);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_18 = V_0;
		return L_18;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_29;
		L_29 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_29;
		RuntimeObject** L_30 = ___0_result;
		int64_t L_31 = V_4;
		int64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(il2cpp_defaults.int64_class, &L_32);
		*(RuntimeObject**)L_30 = ((RuntimeObject*)Castclass((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_30, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_33, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_34 = V_0;
		return L_34;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (L_39)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_45;
		L_45 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_45;
		RuntimeObject** L_46 = ___0_result;
		double L_47 = V_5;
		double L_48 = L_47;
		RuntimeObject* L_49 = Box(il2cpp_defaults.double_class, &L_48);
		*(RuntimeObject**)L_46 = ((RuntimeObject*)Castclass((RuntimeObject*)L_49, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_49, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_50 = V_0;
		return L_50;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		bool L_55;
		L_55 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_52, L_54, NULL);
		if (L_55)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_61;
		L_61 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_61;
		RuntimeObject** L_62 = ___0_result;
		int16_t L_63 = V_6;
		int16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_defaults.int16_class, &L_64);
		*(RuntimeObject**)L_62 = ((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_65, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_66 = V_0;
		return L_66;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_67, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		bool L_71;
		L_71 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_68, L_70, NULL);
		if (L_71)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_77;
		L_77 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_77;
		RuntimeObject** L_78 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_79 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_80 = L_79;
		RuntimeObject* L_81 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_80);
		*(RuntimeObject**)L_78 = ((RuntimeObject*)Castclass((RuntimeObject*)L_81, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_78, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_81, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_82 = V_0;
		return L_82;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		bool L_87;
		L_87 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_84, L_86, NULL);
		if (L_87)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_93;
		L_93 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_93;
		RuntimeObject** L_94 = ___0_result;
		uint8_t L_95 = V_8;
		uint8_t L_96 = L_95;
		RuntimeObject* L_97 = Box(il2cpp_defaults.byte_class, &L_96);
		*(RuntimeObject**)L_94 = ((RuntimeObject*)Castclass((RuntimeObject*)L_97, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_97, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_98 = V_0;
		return L_98;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (L_103)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_109;
		L_109 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_109;
		RuntimeObject** L_110 = ___0_result;
		float L_111 = V_9;
		float L_112 = L_111;
		RuntimeObject* L_113 = Box(il2cpp_defaults.single_class, &L_112);
		*(RuntimeObject**)L_110 = ((RuntimeObject*)Castclass((RuntimeObject*)L_113, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_110, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_113, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_114 = V_0;
		return L_114;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_115 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_116;
		L_116 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_115, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		bool L_119;
		L_119 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_116, L_118, NULL);
		if (L_119)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_121;
		L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_122 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_123;
		L_123 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_122, NULL);
		bool L_124;
		L_124 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_121, L_123, NULL);
		if (!L_124)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_125;
		L_125 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_125;
		RuntimeObject** L_126 = ___0_result;
		uint32_t L_127 = V_10;
		uint32_t L_128 = L_127;
		RuntimeObject* L_129 = Box(il2cpp_defaults.uint32_class, &L_128);
		*(RuntimeObject**)L_126 = ((RuntimeObject*)Castclass((RuntimeObject*)L_129, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_126, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_129, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_130 = V_0;
		return L_130;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		bool L_135;
		L_135 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_132, L_134, NULL);
		if (L_135)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_141;
		L_141 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_141;
		RuntimeObject** L_142 = ___0_result;
		uint16_t L_143 = V_11;
		uint16_t L_144 = L_143;
		RuntimeObject* L_145 = Box(il2cpp_defaults.uint16_class, &L_144);
		*(RuntimeObject**)L_142 = ((RuntimeObject*)Castclass((RuntimeObject*)L_145, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_142, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_145, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_146 = V_0;
		return L_146;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_147 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_148;
		L_148 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_147, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		bool L_151;
		L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_148, L_150, NULL);
		if (L_151)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_157;
		L_157 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_157;
		RuntimeObject** L_158 = ___0_result;
		uint64_t L_159 = V_12;
		uint64_t L_160 = L_159;
		RuntimeObject* L_161 = Box(il2cpp_defaults.uint64_class, &L_160);
		*(RuntimeObject**)L_158 = ((RuntimeObject*)Castclass((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_158, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_162 = V_0;
		return L_162;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_163 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_164;
		L_164 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_163, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		bool L_167;
		L_167 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_164, L_166, NULL);
		if (L_167)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_170 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_171;
		L_171 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_170, NULL);
		bool L_172;
		L_172 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_169, L_171, NULL);
		if (!L_172)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_173;
		L_173 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_173;
		RuntimeObject** L_174 = ___0_result;
		int8_t L_175 = V_13;
		int8_t L_176 = L_175;
		RuntimeObject* L_177 = Box(il2cpp_defaults.sbyte_class, &L_176);
		*(RuntimeObject**)L_174 = ((RuntimeObject*)Castclass((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_174, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_177, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_178 = V_0;
		return L_178;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_184;
		L_184 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_184;
		RuntimeObject** L_185 = ___0_result;
		String_t* L_186 = V_14;
		*(RuntimeObject**)L_185 = ((RuntimeObject*)Castclass((RuntimeObject*)L_186, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_185, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_186, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_187 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_188;
		L_188 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_187, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		bool L_191;
		L_191 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_188, L_190, NULL);
		if (L_191)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		bool L_196;
		L_196 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_193, L_195, NULL);
		if (!L_196)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_197;
		L_197 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_197;
		RuntimeObject** L_198 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_199 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_200 = L_199;
		RuntimeObject* L_201 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_200);
		*(RuntimeObject**)L_198 = ((RuntimeObject*)Castclass((RuntimeObject*)L_201, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_198, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_201, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_202 = V_0;
		return L_202;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_203 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_204;
		L_204 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_203, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_205 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_206;
		L_206 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_205, NULL);
		bool L_207;
		L_207 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_204, L_206, NULL);
		if (L_207)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_208 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_209;
		L_209 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_208, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_210 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_211;
		L_211 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_210, NULL);
		bool L_212;
		L_212 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_209, L_211, NULL);
		if (!L_212)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_213;
		L_213 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_213;
		RuntimeObject** L_214 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_215 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_216 = L_215;
		RuntimeObject* L_217 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_216);
		*(RuntimeObject**)L_214 = ((RuntimeObject*)Castclass((RuntimeObject*)L_217, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_214, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_217, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_218 = V_0;
		return L_218;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_219 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_220;
		L_220 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_219, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_221 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_222;
		L_222 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_221, NULL);
		bool L_223;
		L_223 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_220, L_222, NULL);
		if (L_223)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_229;
		L_229 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_229;
		RuntimeObject** L_230 = ___0_result;
		Guid_t L_231 = V_17;
		Guid_t L_232 = L_231;
		RuntimeObject* L_233 = Box(Guid_t_il2cpp_TypeInfo_var, &L_232);
		*(RuntimeObject**)L_230 = ((RuntimeObject*)Castclass((RuntimeObject*)L_233, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_230, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_233, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_234 = V_0;
		return L_234;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_235 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_236;
		L_236 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_235, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		bool L_239;
		L_239 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_236, L_238, NULL);
		if (L_239)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_240 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_241;
		L_241 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_240, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_242 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_243;
		L_243 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_242, NULL);
		bool L_244;
		L_244 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_241, L_243, NULL);
		if (!L_244)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_245;
		L_245 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_245;
		String_t* L_246 = V_18;
		NullCheck(L_246);
		int32_t L_247;
		L_247 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_246, NULL);
		if ((!(((uint32_t)L_247) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		RuntimeObject** L_248 = ___0_result;
		String_t* L_249 = V_18;
		NullCheck(L_249);
		Il2CppChar L_250;
		L_250 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_249, 0, NULL);
		Il2CppChar L_251 = L_250;
		RuntimeObject* L_252 = Box(il2cpp_defaults.char_class, &L_251);
		*(RuntimeObject**)L_248 = ((RuntimeObject*)Castclass((RuntimeObject*)L_252, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_248, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_252, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_253 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_254;
		L_254 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_253, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		bool L_257;
		L_257 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_254, L_256, NULL);
		if (L_257)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_258 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_259;
		L_259 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_258, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		bool L_262;
		L_262 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_259, L_261, NULL);
		if (!L_262)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		RuntimeObject** L_263 = ___0_result;
		bool L_264;
		L_264 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_265 = L_264;
		RuntimeObject* L_266 = Box(il2cpp_defaults.boolean_class, &L_265);
		*(RuntimeObject**)L_263 = ((RuntimeObject*)Castclass((RuntimeObject*)L_266, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_263, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_266, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return (bool)1;
	}

IL_05b5:
	{
		RuntimeObject** L_267 = ___0_result;
		il2cpp_codegen_initobj(L_267, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE5739CC0030FCBA96746B39DA531989340579B65_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, bool* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		V_0 = ((*(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		bool* L_3 = ___0_value;
		bool L_4 = V_0;
		*(bool*)L_3 = L_4;
		return (bool)1;
	}

IL_002e:
	{
		RuntimeObject* L_5 = __this->___Value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		bool* L_6 = ___0_value;
		bool L_7;
		L_7 = JsonValue_1_TryConvertJsonElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mDD27C6ACF77B35A7B6CE12E56E08CE62682C3DDC(__this, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}

IL_0048:
	{
		bool* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(bool));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBCA4CCC523796D1F1CC205ECFE313D30D800DF8A_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, int32_t* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		V_0 = ((*(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0))));
		int32_t* L_3 = ___0_value;
		int32_t L_4 = V_0;
		*(int32_t*)L_3 = L_4;
		return (bool)1;
	}

IL_002e:
	{
		RuntimeObject* L_5 = __this->___Value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_6 = ___0_value;
		bool L_7;
		L_7 = JsonValue_1_TryConvertJsonElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m43D87972FE6078DB969F068850E708E7EAE2D29B(__this, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}

IL_0048:
	{
		int32_t* L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(int32_t));
		return (bool)0;
	}
}
// Method Definition Index: 63209
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryGetValue_TisRuntimeObject_m7060CB9E8BDF3080A93DF2F2E4D2A7CF5CEF1587_gshared (JsonValue_1_tEE1BD3E0A1B843B900DFFFCB1FD480D0BBF82C9C* __this, RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___Value;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject** L_3 = ___0_value;
		RuntimeObject* L_4 = V_0;
		*(RuntimeObject**)L_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)L_4);
		return (bool)1;
	}

IL_002e:
	{
		RuntimeObject* L_5 = __this->___Value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_5, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject** L_6 = ___0_value;
		bool L_7;
		L_7 = JsonValue_1_TryConvertJsonElement_TisRuntimeObject_m0E82F3908753351C411210BF1B161AB0606FDEE7(__this, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}

IL_0048:
	{
		RuntimeObject** L_8 = ___0_value;
		il2cpp_codegen_initobj(L_8, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// Method Definition Index: 63209
// Method Definition Index: 63211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue_1_ConvertJsonElement_TisIl2CppFullySharedGenericAny_m14ADAB5F323FCAEC74F706959B89362D31ACBA3C_gshared (JsonValue_1_t6B98FC1A6235A1104D2749C376B91CB2DE3DCB5F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
	const Il2CppFullySharedGenericAny L_32 = L_17;
	const Il2CppFullySharedGenericAny L_47 = L_17;
	const Il2CppFullySharedGenericAny L_62 = L_17;
	const Il2CppFullySharedGenericAny L_77 = L_17;
	const Il2CppFullySharedGenericAny L_92 = L_17;
	const Il2CppFullySharedGenericAny L_107 = L_17;
	const Il2CppFullySharedGenericAny L_122 = L_17;
	const Il2CppFullySharedGenericAny L_137 = L_17;
	const Il2CppFullySharedGenericAny L_152 = L_17;
	const Il2CppFullySharedGenericAny L_167 = L_17;
	const Il2CppFullySharedGenericAny L_175 = L_17;
	const Il2CppFullySharedGenericAny L_190 = L_17;
	const Il2CppFullySharedGenericAny L_205 = L_17;
	const Il2CppFullySharedGenericAny L_220 = L_17;
	const Il2CppFullySharedGenericAny L_239 = L_17;
	const Il2CppFullySharedGenericAny L_254 = L_17;
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		V_0 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_1, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_2;
		L_2 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 3)))
		{
			case 0:
			{
				goto IL_0351;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_04aa;
			}
			case 3:
			{
				goto IL_04aa;
			}
		}
	}
	{
		goto IL_04f2;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_007e;
		}
	}

IL_006c:
	{
		int32_t L_14;
		L_14 = JsonElement_GetInt32_m21DEB1B177269FFB57C09E9B094DF8C719926A73((&V_0), NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		void* L_18 = UnBox_Any(L_16, il2cpp_rgctx_data(method->rgctx_data, 1), L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_007e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00c6;
		}
	}

IL_00b4:
	{
		int64_t L_29;
		L_29 = JsonElement_GetInt64_m36B64100ED0C723424B67C43D9F3FFD3F7440071((&V_0), NULL);
		int64_t L_30 = L_29;
		RuntimeObject* L_31 = Box(il2cpp_defaults.int64_class, &L_30);
		void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 1), L_32);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_33)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		bool L_38;
		L_38 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_35, L_37, NULL);
		if (L_38)
		{
			goto IL_00fc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_40, L_42, NULL);
		if (!L_43)
		{
			goto IL_010e;
		}
	}

IL_00fc:
	{
		double L_44;
		L_44 = JsonElement_GetDouble_mE17DAB42B3F55ACCBC970F3466BCBB8951A326BF((&V_0), NULL);
		double L_45 = L_44;
		RuntimeObject* L_46 = Box(il2cpp_defaults.double_class, &L_45);
		void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->rgctx_data, 1), L_47);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (L_53)
		{
			goto IL_0144;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		bool L_58;
		L_58 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_55, L_57, NULL);
		if (!L_58)
		{
			goto IL_0156;
		}
	}

IL_0144:
	{
		int16_t L_59;
		L_59 = JsonElement_GetInt16_mBB39D07DCB65BCCA817A7D1169BBC7BD3F507D48((&V_0), NULL);
		int16_t L_60 = L_59;
		RuntimeObject* L_61 = Box(il2cpp_defaults.int16_class, &L_60);
		void* L_63 = UnBox_Any(L_61, il2cpp_rgctx_data(method->rgctx_data, 1), L_62);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_63)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0156:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (L_68)
		{
			goto IL_018c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_70, L_72, NULL);
		if (!L_73)
		{
			goto IL_019e;
		}
	}

IL_018c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_74;
		L_74 = JsonElement_GetDecimal_m22272312D2021349A6EB7E2F9B7887C5F44ABCAE((&V_0), NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_75 = L_74;
		RuntimeObject* L_76 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_75);
		void* L_78 = UnBox_Any(L_76, il2cpp_rgctx_data(method->rgctx_data, 1), L_77);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_78)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_019e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		bool L_83;
		L_83 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_80, L_82, NULL);
		if (L_83)
		{
			goto IL_01d4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_84 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_85;
		L_85 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_84, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_87;
		L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
		bool L_88;
		L_88 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_85, L_87, NULL);
		if (!L_88)
		{
			goto IL_01e6;
		}
	}

IL_01d4:
	{
		uint8_t L_89;
		L_89 = JsonElement_GetByte_m35643A5845F97071131C7F452B3752C5CA6E055E((&V_0), NULL);
		uint8_t L_90 = L_89;
		RuntimeObject* L_91 = Box(il2cpp_defaults.byte_class, &L_90);
		void* L_93 = UnBox_Any(L_91, il2cpp_rgctx_data(method->rgctx_data, 1), L_92);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_93)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_01e6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (L_98)
		{
			goto IL_021c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_022e;
		}
	}

IL_021c:
	{
		float L_104;
		L_104 = JsonElement_GetSingle_m0F4CC322B96916B5F77259B9BDC523F301A42991((&V_0), NULL);
		float L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_defaults.single_class, &L_105);
		void* L_108 = UnBox_Any(L_106, il2cpp_rgctx_data(method->rgctx_data, 1), L_107);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_108)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_022e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_110;
		L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		bool L_113;
		L_113 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_110, L_112, NULL);
		if (L_113)
		{
			goto IL_0264;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_0276;
		}
	}

IL_0264:
	{
		uint32_t L_119;
		L_119 = JsonElement_GetUInt32_mD3E31244BC7A3FF44A58E823246C0C1A0C243CEA((&V_0), NULL);
		uint32_t L_120 = L_119;
		RuntimeObject* L_121 = Box(il2cpp_defaults.uint32_class, &L_120);
		void* L_123 = UnBox_Any(L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_123)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0276:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_125;
		L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_127;
		L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
		bool L_128;
		L_128 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_127, NULL);
		if (L_128)
		{
			goto IL_02ac;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_131 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_132;
		L_132 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_131, NULL);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_130, L_132, NULL);
		if (!L_133)
		{
			goto IL_02be;
		}
	}

IL_02ac:
	{
		uint16_t L_134;
		L_134 = JsonElement_GetUInt16_m641F42FA26FD197143A96A403638C9562828915C((&V_0), NULL);
		uint16_t L_135 = L_134;
		RuntimeObject* L_136 = Box(il2cpp_defaults.uint16_class, &L_135);
		void* L_138 = UnBox_Any(L_136, il2cpp_rgctx_data(method->rgctx_data, 1), L_137);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_138)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_02be:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_139 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_140;
		L_140 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_139, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_141 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_142;
		L_142 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_141, NULL);
		bool L_143;
		L_143 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_140, L_142, NULL);
		if (L_143)
		{
			goto IL_02f4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_144 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_145;
		L_145 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_144, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_146 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_147;
		L_147 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_146, NULL);
		bool L_148;
		L_148 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_145, L_147, NULL);
		if (!L_148)
		{
			goto IL_0306;
		}
	}

IL_02f4:
	{
		uint64_t L_149;
		L_149 = JsonElement_GetUInt64_mF908D0DE0C6A308AC74306C6CC953FBC9AA3931D((&V_0), NULL);
		uint64_t L_150 = L_149;
		RuntimeObject* L_151 = Box(il2cpp_defaults.uint64_class, &L_150);
		void* L_153 = UnBox_Any(L_151, il2cpp_rgctx_data(method->rgctx_data, 1), L_152);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_153)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_156 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_157;
		L_157 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_156, NULL);
		bool L_158;
		L_158 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_157, NULL);
		if (L_158)
		{
			goto IL_033f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_159 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_160;
		L_160 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_159, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_161 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_162;
		L_162 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_161, NULL);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_160, L_162, NULL);
		if (!L_163)
		{
			goto IL_04f2;
		}
	}

IL_033f:
	{
		int8_t L_164;
		L_164 = JsonElement_GetSByte_m4298D16E69458AC80878131C2C341689F714FA19((&V_0), NULL);
		int8_t L_165 = L_164;
		RuntimeObject* L_166 = Box(il2cpp_defaults.sbyte_class, &L_165);
		void* L_168 = UnBox_Any(L_166, il2cpp_rgctx_data(method->rgctx_data, 1), L_167);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_168)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0351:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_0379;
		}
	}
	{
		String_t* L_174;
		L_174 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		void* L_176 = UnBox_Any((RuntimeObject*)L_174, il2cpp_rgctx_data(method->rgctx_data, 1), L_175);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_176)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0379:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_177 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_178;
		L_178 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_177, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		bool L_181;
		L_181 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_178, L_180, NULL);
		if (L_181)
		{
			goto IL_03af;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_182 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_183;
		L_183 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_182, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_184 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_185;
		L_185 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_184, NULL);
		bool L_186;
		L_186 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_183, L_185, NULL);
		if (!L_186)
		{
			goto IL_03c1;
		}
	}

IL_03af:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_187;
		L_187 = JsonElement_GetDateTime_mAFA3DE8F3E1C93354929F73CEB73243A175D48CB((&V_0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_188 = L_187;
		RuntimeObject* L_189 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_188);
		void* L_191 = UnBox_Any(L_189, il2cpp_rgctx_data(method->rgctx_data, 1), L_190);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_191)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_03c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_194 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_195;
		L_195 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_194, NULL);
		bool L_196;
		L_196 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_193, L_195, NULL);
		if (L_196)
		{
			goto IL_03f7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_197 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_198;
		L_198 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_197, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_199 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_200;
		L_200 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_199, NULL);
		bool L_201;
		L_201 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_198, L_200, NULL);
		if (!L_201)
		{
			goto IL_0409;
		}
	}

IL_03f7:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_202;
		L_202 = JsonElement_GetDateTimeOffset_m4BC5D72139AA83336EC5E61737809DEAF379F227((&V_0), NULL);
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_203 = L_202;
		RuntimeObject* L_204 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_203);
		void* L_206 = UnBox_Any(L_204, il2cpp_rgctx_data(method->rgctx_data, 1), L_205);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_206)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0409:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_207 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_208;
		L_208 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_207, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_209 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_210;
		L_210 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_209, NULL);
		bool L_211;
		L_211 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_208, L_210, NULL);
		if (L_211)
		{
			goto IL_043f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_0451;
		}
	}

IL_043f:
	{
		Guid_t L_217;
		L_217 = JsonElement_GetGuid_m023B14654E51753008C57E33759AEB291873BD61((&V_0), NULL);
		Guid_t L_218 = L_217;
		RuntimeObject* L_219 = Box(Guid_t_il2cpp_TypeInfo_var, &L_218);
		void* L_221 = UnBox_Any(L_219, il2cpp_rgctx_data(method->rgctx_data, 1), L_220);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_221)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_0451:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_222 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_223;
		L_223 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_222, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		bool L_226;
		L_226 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_223, L_225, NULL);
		if (L_226)
		{
			goto IL_0487;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_227 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_228;
		L_228 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_227, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_229 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_230;
		L_230 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_229, NULL);
		bool L_231;
		L_231 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_228, L_230, NULL);
		if (!L_231)
		{
			goto IL_04f2;
		}
	}

IL_0487:
	{
		String_t* L_232;
		L_232 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_0), NULL);
		V_2 = L_232;
		String_t* L_233 = V_2;
		NullCheck(L_233);
		int32_t L_234;
		L_234 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_233, NULL);
		if ((!(((uint32_t)L_234) == ((uint32_t)1))))
		{
			goto IL_04f2;
		}
	}
	{
		String_t* L_235 = V_2;
		NullCheck(L_235);
		Il2CppChar L_236;
		L_236 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_235, 0, NULL);
		Il2CppChar L_237 = L_236;
		RuntimeObject* L_238 = Box(il2cpp_defaults.char_class, &L_237);
		void* L_240 = UnBox_Any(L_238, il2cpp_rgctx_data(method->rgctx_data, 1), L_239);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_240)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_04aa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_241 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_242;
		L_242 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_241, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_243 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_244;
		L_244 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_243, NULL);
		bool L_245;
		L_245 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_242, L_244, NULL);
		if (L_245)
		{
			goto IL_04e0;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_246 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_247;
		L_247 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_246, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_248 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_249;
		L_249 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_248, NULL);
		bool L_250;
		L_250 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_247, L_249, NULL);
		if (!L_250)
		{
			goto IL_04f2;
		}
	}

IL_04e0:
	{
		bool L_251;
		L_251 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_0), NULL);
		bool L_252 = L_251;
		RuntimeObject* L_253 = Box(il2cpp_defaults.boolean_class, &L_252);
		void* L_255 = UnBox_Any(L_253, il2cpp_rgctx_data(method->rgctx_data, 1), L_254);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_255)), SizeOf_TypeToConvert_t23721BB15C27F73628F2E8EF5EF3348AA508E4F8);
		return;
	}

IL_04f2:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_256;
		L_256 = SR_get_NodeUnableToConvertElement_mD0D5FA6963288CDFFD80E4C73C3C1EB3417E6123(NULL);
		uint8_t L_257;
		L_257 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_0), NULL);
		uint8_t L_258 = L_257;
		RuntimeObject* L_259 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonValueKind_t86CF24FA22C77B3FB161CDE8C0842689DB648024_il2cpp_TypeInfo_var)), &L_258);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_260 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_261;
		L_261 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_260, NULL);
		String_t* L_262;
		L_262 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_256, L_259, (RuntimeObject*)L_261, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_263 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_263, L_262, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_263, method);
	}
}
// Method Definition Index: 63208
// Method Definition Index: 63208
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonValue_1_GetValue_TisIl2CppFullySharedGenericAny_m3622A7A554B2FB7E9D38C1D61DAE153CAAEC20DE_gshared (JsonValue_1_t6B98FC1A6235A1104D2749C376B91CB2DE3DCB5F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
	const Il2CppFullySharedGenericAny L_10 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_8 = L_0;
	const Il2CppFullySharedGenericAny L_12 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
	memset(V_0, 0, SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
	memset(V_1, 0, SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		il2cpp_codegen_memcpy(V_1, L_0, SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		il2cpp_codegen_memcpy(L_1, V_1, SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_1);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_3);
		void* L_6 = UnBox_Any(((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0), L_5);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_6)), SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
		return;
	}

IL_0027:
	{
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_8);
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_T_t9C492E4BD3BBD618638D950033BBA142D9FC9AEE);
		return;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SR_t6DCD41CF50D2C0E133584D8610EA913A5B5445CA_il2cpp_TypeInfo_var)));
		String_t* L_11;
		L_11 = SR_get_NodeUnableToConvert_mD8A395244D268D08F2FC623B7A1AF20C99AFF7A2(NULL);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		Type_t* L_14;
		L_14 = ConstrainedFuncInvoker0< Type_t* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_13, (void*)(Il2CppFullySharedGenericAny*)V_1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17;
		L_17 = SR_Format_m3477D4175CB8E27C4C1753CE70687768BBD2B60F(L_11, (RuntimeObject*)L_14, (RuntimeObject*)L_16, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_18 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}
}
// Method Definition Index: 63212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonValue_1_TryConvertJsonElement_TisIl2CppFullySharedGenericAny_m1940EA47ACA9775074530008E682288D96E22566_gshared (JsonValue_1_t6B98FC1A6235A1104D2749C376B91CB2DE3DCB5F* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const uint32_t SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
	const Il2CppFullySharedGenericAny L_37 = L_19;
	const Il2CppFullySharedGenericAny L_55 = L_19;
	const Il2CppFullySharedGenericAny L_73 = L_19;
	const Il2CppFullySharedGenericAny L_91 = L_19;
	const Il2CppFullySharedGenericAny L_109 = L_19;
	const Il2CppFullySharedGenericAny L_127 = L_19;
	const Il2CppFullySharedGenericAny L_145 = L_19;
	const Il2CppFullySharedGenericAny L_163 = L_19;
	const Il2CppFullySharedGenericAny L_181 = L_19;
	const Il2CppFullySharedGenericAny L_199 = L_19;
	const Il2CppFullySharedGenericAny L_210 = L_19;
	const Il2CppFullySharedGenericAny L_227 = L_19;
	const Il2CppFullySharedGenericAny L_245 = L_19;
	const Il2CppFullySharedGenericAny L_263 = L_19;
	const Il2CppFullySharedGenericAny L_284 = L_19;
	const Il2CppFullySharedGenericAny L_300 = L_19;
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
	bool V_0 = false;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint8_t V_2 = 0;
	int32_t V_3 = 0;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	int16_t V_6 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_7;
	memset((&V_7), 0, sizeof(V_7));
	uint8_t V_8 = 0x0;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	uint64_t V_12 = 0;
	int8_t V_13 = 0x0;
	String_t* V_14 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_15;
	memset((&V_15), 0, sizeof(V_15));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Guid_t V_17;
	memset((&V_17), 0, sizeof(V_17));
	String_t* V_18 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0)), SizeOf_TValue_tC22912C4D953D572943EA43B7A79C3A912B0784D);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		V_1 = ((*(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1*)UnBox(L_1, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var)));
		uint8_t L_2;
		L_2 = JsonElement_get_ValueKind_m14EFE30FAA112F5199CBD9C42DC9C3AEF6ADA1B5((&V_1), NULL);
		V_2 = L_2;
		uint8_t L_3 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 3)))
		{
			case 0:
			{
				goto IL_03d4;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0566;
			}
			case 3:
			{
				goto IL_0566;
			}
		}
	}
	{
		goto IL_05b5;
	}

IL_0036:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int32_class->byval_arg) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}

IL_006c:
	{
		bool L_14;
		L_14 = JsonElement_TryGetInt32_m5FCAA7B399C4469AFFE24400FDDBE78F8C60041E((&V_1), (&V_3), NULL);
		V_0 = L_14;
		Il2CppFullySharedGenericAny* L_15 = ___0_result;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.int32_class, &L_17);
		void* L_20 = UnBox_Any(L_18, il2cpp_rgctx_data(method->rgctx_data, 2), L_19);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_15, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_20)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_15, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_20)));
		bool L_21 = V_0;
		return L_21;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int64_class->byval_arg) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (L_26)
		{
			goto IL_00bf;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00dd;
		}
	}

IL_00bf:
	{
		bool L_32;
		L_32 = JsonElement_TryGetInt64_mEDF23E13C335B2A42C1EE522D3620787F31F86EF((&V_1), (&V_4), NULL);
		V_0 = L_32;
		Il2CppFullySharedGenericAny* L_33 = ___0_result;
		int64_t L_34 = V_4;
		int64_t L_35 = L_34;
		RuntimeObject* L_36 = Box(il2cpp_defaults.int64_class, &L_35);
		void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38)));
		bool L_39 = V_0;
		return L_39;
	}

IL_00dd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.double_class->byval_arg) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (L_44)
		{
			goto IL_0113;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0131;
		}
	}

IL_0113:
	{
		bool L_50;
		L_50 = JsonElement_TryGetDouble_m180CCE66B68792F7DABD7F43748E2F97A1C145AF((&V_1), (&V_5), NULL);
		V_0 = L_50;
		Il2CppFullySharedGenericAny* L_51 = ___0_result;
		double L_52 = V_5;
		double L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_defaults.double_class, &L_53);
		void* L_56 = UnBox_Any(L_54, il2cpp_rgctx_data(method->rgctx_data, 2), L_55);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_51, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_56)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_51, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_56)));
		bool L_57 = V_0;
		return L_57;
	}

IL_0131:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.int16_class->byval_arg) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		bool L_62;
		L_62 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_61, NULL);
		if (L_62)
		{
			goto IL_0167;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Nullable_1_t57D99A484501B89DA27E67D6D9A89722D5A7DE2C_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0185;
		}
	}

IL_0167:
	{
		bool L_68;
		L_68 = JsonElement_TryGetInt16_mD744BA7CFCD46EB4D1D95D68223DE85FDFC6D177((&V_1), (&V_6), NULL);
		V_0 = L_68;
		Il2CppFullySharedGenericAny* L_69 = ___0_result;
		int16_t L_70 = V_6;
		int16_t L_71 = L_70;
		RuntimeObject* L_72 = Box(il2cpp_defaults.int16_class, &L_71);
		void* L_74 = UnBox_Any(L_72, il2cpp_rgctx_data(method->rgctx_data, 2), L_73);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_69, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_74)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_69, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_74)));
		bool L_75 = V_0;
		return L_75;
	}

IL_0185:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (L_80)
		{
			goto IL_01bb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB_0_0_0_var) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_01d9;
		}
	}

IL_01bb:
	{
		bool L_86;
		L_86 = JsonElement_TryGetDecimal_mB1C579E2988055220D48BDCE52EBA29F2E60B1FD((&V_1), (&V_7), NULL);
		V_0 = L_86;
		Il2CppFullySharedGenericAny* L_87 = ___0_result;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_88 = V_7;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_89 = L_88;
		RuntimeObject* L_90 = Box(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var, &L_89);
		void* L_92 = UnBox_Any(L_90, il2cpp_rgctx_data(method->rgctx_data, 2), L_91);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_87, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_92)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_87, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_92)));
		bool L_93 = V_0;
		return L_93;
	}

IL_01d9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.byte_class->byval_arg) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (L_98)
		{
			goto IL_020f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Nullable_1_tEB6689CC9747A3600689077DCBF77B8E8B510505_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_022d;
		}
	}

IL_020f:
	{
		bool L_104;
		L_104 = JsonElement_TryGetByte_mFDCC5CDAD5EB89D7D08A0C95425A10E4F84C26E0((&V_1), (&V_8), NULL);
		V_0 = L_104;
		Il2CppFullySharedGenericAny* L_105 = ___0_result;
		uint8_t L_106 = V_8;
		uint8_t L_107 = L_106;
		RuntimeObject* L_108 = Box(il2cpp_defaults.byte_class, &L_107);
		void* L_110 = UnBox_Any(L_108, il2cpp_rgctx_data(method->rgctx_data, 2), L_109);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_105, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_110)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_105, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_110)));
		bool L_111 = V_0;
		return L_111;
	}

IL_022d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_112 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_113;
		L_113 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_112, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.single_class->byval_arg) };
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		bool L_116;
		L_116 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_115, NULL);
		if (L_116)
		{
			goto IL_0263;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_119 = { reinterpret_cast<intptr_t> (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75_0_0_0_var) };
		Type_t* L_120;
		L_120 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_119, NULL);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_118, L_120, NULL);
		if (!L_121)
		{
			goto IL_0281;
		}
	}

IL_0263:
	{
		bool L_122;
		L_122 = JsonElement_TryGetSingle_m0070773ACD37556E430A1E046C7AF64FF3480A9D((&V_1), (&V_9), NULL);
		V_0 = L_122;
		Il2CppFullySharedGenericAny* L_123 = ___0_result;
		float L_124 = V_9;
		float L_125 = L_124;
		RuntimeObject* L_126 = Box(il2cpp_defaults.single_class, &L_125);
		void* L_128 = UnBox_Any(L_126, il2cpp_rgctx_data(method->rgctx_data, 2), L_127);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_123, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_128)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_123, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_128)));
		bool L_129 = V_0;
		return L_129;
	}

IL_0281:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_130 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_131;
		L_131 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_130, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_132 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint32_class->byval_arg) };
		Type_t* L_133;
		L_133 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_132, NULL);
		bool L_134;
		L_134 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_131, L_133, NULL);
		if (L_134)
		{
			goto IL_02b7;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099_0_0_0_var) };
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		bool L_139;
		L_139 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_136, L_138, NULL);
		if (!L_139)
		{
			goto IL_02d5;
		}
	}

IL_02b7:
	{
		bool L_140;
		L_140 = JsonElement_TryGetUInt32_m7BF5734415556191308BE7031FF34C202695B732((&V_1), (&V_10), NULL);
		V_0 = L_140;
		Il2CppFullySharedGenericAny* L_141 = ___0_result;
		uint32_t L_142 = V_10;
		uint32_t L_143 = L_142;
		RuntimeObject* L_144 = Box(il2cpp_defaults.uint32_class, &L_143);
		void* L_146 = UnBox_Any(L_144, il2cpp_rgctx_data(method->rgctx_data, 2), L_145);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_141, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_146)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_141, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_146)));
		bool L_147 = V_0;
		return L_147;
	}

IL_02d5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint16_class->byval_arg) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (L_152)
		{
			goto IL_030b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_153 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_154;
		L_154 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_153, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_155 = { reinterpret_cast<intptr_t> (Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9_0_0_0_var) };
		Type_t* L_156;
		L_156 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_155, NULL);
		bool L_157;
		L_157 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_154, L_156, NULL);
		if (!L_157)
		{
			goto IL_0329;
		}
	}

IL_030b:
	{
		bool L_158;
		L_158 = JsonElement_TryGetUInt16_m4571AFE571E13AFEFC525FA4CE4338BD9DBD093D((&V_1), (&V_11), NULL);
		V_0 = L_158;
		Il2CppFullySharedGenericAny* L_159 = ___0_result;
		uint16_t L_160 = V_11;
		uint16_t L_161 = L_160;
		RuntimeObject* L_162 = Box(il2cpp_defaults.uint16_class, &L_161);
		void* L_164 = UnBox_Any(L_162, il2cpp_rgctx_data(method->rgctx_data, 2), L_163);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_159, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_164)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_159, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_164)));
		bool L_165 = V_0;
		return L_165;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_167;
		L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.uint64_class->byval_arg) };
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
		bool L_170;
		L_170 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_167, L_169, NULL);
		if (L_170)
		{
			goto IL_035f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99_0_0_0_var) };
		Type_t* L_174;
		L_174 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_173, NULL);
		bool L_175;
		L_175 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_172, L_174, NULL);
		if (!L_175)
		{
			goto IL_037d;
		}
	}

IL_035f:
	{
		bool L_176;
		L_176 = JsonElement_TryGetUInt64_m9F029744037C6BB9EDE14241C6023C5210CF1382((&V_1), (&V_12), NULL);
		V_0 = L_176;
		Il2CppFullySharedGenericAny* L_177 = ___0_result;
		uint64_t L_178 = V_12;
		uint64_t L_179 = L_178;
		RuntimeObject* L_180 = Box(il2cpp_defaults.uint64_class, &L_179);
		void* L_182 = UnBox_Any(L_180, il2cpp_rgctx_data(method->rgctx_data, 2), L_181);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_177, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_182)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_177, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_182)));
		bool L_183 = V_0;
		return L_183;
	}

IL_037d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_184 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_185;
		L_185 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_184, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_186 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.sbyte_class->byval_arg) };
		Type_t* L_187;
		L_187 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_186, NULL);
		bool L_188;
		L_188 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_185, L_187, NULL);
		if (L_188)
		{
			goto IL_03b6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_189 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_190;
		L_190 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_189, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_191 = { reinterpret_cast<intptr_t> (Nullable_1_tCF16C2638810B89EAA3EEFE6B35FC71B6AE96B2C_0_0_0_var) };
		Type_t* L_192;
		L_192 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_191, NULL);
		bool L_193;
		L_193 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_190, L_192, NULL);
		if (!L_193)
		{
			goto IL_05b5;
		}
	}

IL_03b6:
	{
		bool L_194;
		L_194 = JsonElement_TryGetSByte_m3A51B667F782561857FEE1652216140F7B7C6B6E((&V_1), (&V_13), NULL);
		V_0 = L_194;
		Il2CppFullySharedGenericAny* L_195 = ___0_result;
		int8_t L_196 = V_13;
		int8_t L_197 = L_196;
		RuntimeObject* L_198 = Box(il2cpp_defaults.sbyte_class, &L_197);
		void* L_200 = UnBox_Any(L_198, il2cpp_rgctx_data(method->rgctx_data, 2), L_199);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_195, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_200)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_195, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_200)));
		bool L_201 = V_0;
		return L_201;
	}

IL_03d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_202 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_203;
		L_203 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_202, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_204 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.string_class->byval_arg) };
		Type_t* L_205;
		L_205 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_204, NULL);
		bool L_206;
		L_206 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_203, L_205, NULL);
		if (!L_206)
		{
			goto IL_0407;
		}
	}
	{
		String_t* L_207;
		L_207 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_14 = L_207;
		Il2CppFullySharedGenericAny* L_208 = ___0_result;
		String_t* L_209 = V_14;
		void* L_211 = UnBox_Any((RuntimeObject*)L_209, il2cpp_rgctx_data(method->rgctx_data, 2), L_210);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_208, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_211)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_208, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_211)));
		return (bool)1;
	}

IL_0407:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (L_216)
		{
			goto IL_043d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_217 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_218;
		L_218 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_217, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_219 = { reinterpret_cast<intptr_t> (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC_0_0_0_var) };
		Type_t* L_220;
		L_220 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_219, NULL);
		bool L_221;
		L_221 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_218, L_220, NULL);
		if (!L_221)
		{
			goto IL_045b;
		}
	}

IL_043d:
	{
		bool L_222;
		L_222 = JsonElement_TryGetDateTime_m48D04702635DC926D04BF5F4652278CBE00216B9((&V_1), (&V_15), NULL);
		V_0 = L_222;
		Il2CppFullySharedGenericAny* L_223 = ___0_result;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_224 = V_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_225 = L_224;
		RuntimeObject* L_226 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_225);
		void* L_228 = UnBox_Any(L_226, il2cpp_rgctx_data(method->rgctx_data, 2), L_227);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_223, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_228)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_223, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_228)));
		bool L_229 = V_0;
		return L_229;
	}

IL_045b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_230 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_231;
		L_231 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_230, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_232 = { reinterpret_cast<intptr_t> (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_0_0_0_var) };
		Type_t* L_233;
		L_233 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_232, NULL);
		bool L_234;
		L_234 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_231, L_233, NULL);
		if (L_234)
		{
			goto IL_0491;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_235 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_236;
		L_236 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_235, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_237 = { reinterpret_cast<intptr_t> (Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B_0_0_0_var) };
		Type_t* L_238;
		L_238 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_237, NULL);
		bool L_239;
		L_239 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_236, L_238, NULL);
		if (!L_239)
		{
			goto IL_04af;
		}
	}

IL_0491:
	{
		bool L_240;
		L_240 = JsonElement_TryGetDateTimeOffset_m92CBE5B4EA31CDC3F4437CD226469370B18AFEB7((&V_1), (&V_16), NULL);
		V_0 = L_240;
		Il2CppFullySharedGenericAny* L_241 = ___0_result;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_242 = V_16;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_243 = L_242;
		RuntimeObject* L_244 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_243);
		void* L_246 = UnBox_Any(L_244, il2cpp_rgctx_data(method->rgctx_data, 2), L_245);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_241, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_246)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_241, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_246)));
		bool L_247 = V_0;
		return L_247;
	}

IL_04af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_248 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_249;
		L_249 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_248, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_250 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		Type_t* L_251;
		L_251 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_250, NULL);
		bool L_252;
		L_252 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_249, L_251, NULL);
		if (L_252)
		{
			goto IL_04e5;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_253 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_254;
		L_254 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_253, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_255 = { reinterpret_cast<intptr_t> (Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7_0_0_0_var) };
		Type_t* L_256;
		L_256 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_255, NULL);
		bool L_257;
		L_257 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_254, L_256, NULL);
		if (!L_257)
		{
			goto IL_0503;
		}
	}

IL_04e5:
	{
		bool L_258;
		L_258 = JsonElement_TryGetGuid_m65532B5221CC73DCBB6899978C33243E6D315756((&V_1), (&V_17), NULL);
		V_0 = L_258;
		Il2CppFullySharedGenericAny* L_259 = ___0_result;
		Guid_t L_260 = V_17;
		Guid_t L_261 = L_260;
		RuntimeObject* L_262 = Box(Guid_t_il2cpp_TypeInfo_var, &L_261);
		void* L_264 = UnBox_Any(L_262, il2cpp_rgctx_data(method->rgctx_data, 2), L_263);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_259, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_264)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_259, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_264)));
		bool L_265 = V_0;
		return L_265;
	}

IL_0503:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_266 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_267;
		L_267 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_266, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_268 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_269;
		L_269 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_268, NULL);
		bool L_270;
		L_270 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_267, L_269, NULL);
		if (L_270)
		{
			goto IL_0539;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_271 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_272;
		L_272 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_271, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_273 = { reinterpret_cast<intptr_t> (Nullable_1_tD52F1D0FC7EBB336F119BE953E59F426766032C1_0_0_0_var) };
		Type_t* L_274;
		L_274 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_273, NULL);
		bool L_275;
		L_275 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_272, L_274, NULL);
		if (!L_275)
		{
			goto IL_05b5;
		}
	}

IL_0539:
	{
		String_t* L_276;
		L_276 = JsonElement_GetString_m7AE007D2F1B4016AA1B53BF79B1A1DD1EA42EB94((&V_1), NULL);
		V_18 = L_276;
		String_t* L_277 = V_18;
		NullCheck(L_277);
		int32_t L_278;
		L_278 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_277, NULL);
		if ((!(((uint32_t)L_278) == ((uint32_t)1))))
		{
			goto IL_05b5;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_279 = ___0_result;
		String_t* L_280 = V_18;
		NullCheck(L_280);
		Il2CppChar L_281;
		L_281 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_280, 0, NULL);
		Il2CppChar L_282 = L_281;
		RuntimeObject* L_283 = Box(il2cpp_defaults.char_class, &L_282);
		void* L_285 = UnBox_Any(L_283, il2cpp_rgctx_data(method->rgctx_data, 2), L_284);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_279, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_285)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_279, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_285)));
		return (bool)1;
	}

IL_0566:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_286 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_287;
		L_287 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_286, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_288 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.boolean_class->byval_arg) };
		Type_t* L_289;
		L_289 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_288, NULL);
		bool L_290;
		L_290 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_287, L_289, NULL);
		if (L_290)
		{
			goto IL_059c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_291 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_292;
		L_292 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_291, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_293 = { reinterpret_cast<intptr_t> (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01_0_0_0_var) };
		Type_t* L_294;
		L_294 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_293, NULL);
		bool L_295;
		L_295 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_292, L_294, NULL);
		if (!L_295)
		{
			goto IL_05b5;
		}
	}

IL_059c:
	{
		Il2CppFullySharedGenericAny* L_296 = ___0_result;
		bool L_297;
		L_297 = JsonElement_GetBoolean_m79B727C69685B51744A6CEFFE17CEECAEDE4FCFC((&V_1), NULL);
		bool L_298 = L_297;
		RuntimeObject* L_299 = Box(il2cpp_defaults.boolean_class, &L_298);
		void* L_301 = UnBox_Any(L_299, il2cpp_rgctx_data(method->rgctx_data, 2), L_300);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_296, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_301)), SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_296, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_301)));
		return (bool)1;
	}

IL_05b5:
	{
		Il2CppFullySharedGenericAny* L_302 = ___0_result;
		il2cpp_codegen_initobj(L_302, SizeOf_TypeToConvert_t00B5E0162D9D30FD097D589B1DDFEF76D92C6BF5);
		return (bool)0;
	}
}
// Method Definition Index: 743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
