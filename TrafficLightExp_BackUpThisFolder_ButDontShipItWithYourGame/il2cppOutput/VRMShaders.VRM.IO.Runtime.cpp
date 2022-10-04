﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct KeyCollection_t9A34030C819CBA9710BE21D74B6DFEA7BFC6760B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct ValueCollection_t5F5BEF8E8EFA8EF757C17CB8378DEF17CFDC58C6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniGLTF.ShaderPropExporter.ShaderProps>[]
struct EntryU5BU5D_t1A8C253B0310087FE3180B341C26144593E9FB65;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UniGLTF.ShaderPropExporter.ShaderProperty[]
struct ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UniGLTF.ShaderPropExporter.SupportedShader[]
struct SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UniGLTF.ShaderPropExporter.PreExportShaderAttribute
struct PreExportShaderAttribute_tCC6DA96141C9112C04597DFBFF3422F920620125;
// UniGLTF.ShaderPropExporter.PreExportShadersAttribute
struct PreExportShadersAttribute_t5CAEAED552C3F91D57631CA844CFEB726551DEAE;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UniGLTF.ShaderPropExporter.ShaderProps
struct ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral034DB7F22AE9CBA3CDE4D7145D0B332C6E3587C0;
IL2CPP_EXTERN_C String_t* _stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F;
IL2CPP_EXTERN_C String_t* _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9;
IL2CPP_EXTERN_C String_t* _stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373;
IL2CPP_EXTERN_C String_t* _stringLiteral186805D5F75DD57BBE3EBEC2531DA33F1EB8A9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526;
IL2CPP_EXTERN_C String_t* _stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669;
IL2CPP_EXTERN_C String_t* _stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE;
IL2CPP_EXTERN_C String_t* _stringLiteral304134432E5962CF6674E58878A873D81198CAEB;
IL2CPP_EXTERN_C String_t* _stringLiteral30E5B38553E51419924E8EC9DF17949D13973236;
IL2CPP_EXTERN_C String_t* _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916;
IL2CPP_EXTERN_C String_t* _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F;
IL2CPP_EXTERN_C String_t* _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE;
IL2CPP_EXTERN_C String_t* _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF;
IL2CPP_EXTERN_C String_t* _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B;
IL2CPP_EXTERN_C String_t* _stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45;
IL2CPP_EXTERN_C String_t* _stringLiteral524916C9AA35BA4551E0A4C370367926BF3F833B;
IL2CPP_EXTERN_C String_t* _stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8;
IL2CPP_EXTERN_C String_t* _stringLiteral59B259A263D1796F7617C20534034F94A19001FE;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6;
IL2CPP_EXTERN_C String_t* _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32;
IL2CPP_EXTERN_C String_t* _stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400;
IL2CPP_EXTERN_C String_t* _stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229;
IL2CPP_EXTERN_C String_t* _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C;
IL2CPP_EXTERN_C String_t* _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574;
IL2CPP_EXTERN_C String_t* _stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492;
IL2CPP_EXTERN_C String_t* _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A;
IL2CPP_EXTERN_C String_t* _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0;
IL2CPP_EXTERN_C String_t* _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6;
IL2CPP_EXTERN_C String_t* _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201;
IL2CPP_EXTERN_C String_t* _stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F;
IL2CPP_EXTERN_C String_t* _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5;
IL2CPP_EXTERN_C String_t* _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F;
IL2CPP_EXTERN_C String_t* _stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105;
IL2CPP_EXTERN_C String_t* _stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E;
IL2CPP_EXTERN_C String_t* _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C;
IL2CPP_EXTERN_C String_t* _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B;
IL2CPP_EXTERN_C String_t* _stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7;
IL2CPP_EXTERN_C String_t* _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628;
IL2CPP_EXTERN_C String_t* _stringLiteralCB06293E3070D888955542383617A31852FFF8DF;
IL2CPP_EXTERN_C String_t* _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralD19F7F98535163D0D028CDFC22AE9D046E010719;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76;
IL2CPP_EXTERN_C String_t* _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7;
IL2CPP_EXTERN_C String_t* _stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934;
IL2CPP_EXTERN_C String_t* _stringLiteralE91B8361199214452AAF163E796839A54971EEA7;
IL2CPP_EXTERN_C String_t* _stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1EC761CE0E8D8F1E0C1FEFB82D6872F3368E030B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDD7A09F4B32AC1ECF17FD63CE0670C5D3E64910D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA0243B09CE9F99EAA6BBF3C111F697AE23A4F383_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m1302F53E506205630271B1950D05B5A024FE67CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB09B2FF14CBB25D9002FFD6BC1DEE8E5435CC3B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PreExportShaderAttribute_tCC6DA96141C9112C04597DFBFF3422F920620125_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_0_0_0_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD9145520E9F7F8D49E3EC28F516EA57DBDBF691B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1A8C253B0310087FE3180B341C26144593E9FB65* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9A34030C819CBA9710BE21D74B6DFEA7BFC6760B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5F5BEF8E8EFA8EF757C17CB8378DEF17CFDC58C6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UniGLTF.ShaderPropExporter.PreExportShaders
struct PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813  : public RuntimeObject
{
};

struct PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_StaticFields
{
	// UniGLTF.ShaderPropExporter.SupportedShader[] UniGLTF.ShaderPropExporter.PreExportShaders::SupportedShaders
	SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* ___SupportedShaders_1;
	// UniGLTF.ShaderPropExporter.SupportedShader[] UniGLTF.ShaderPropExporter.PreExportShaders::VRMSupportedShaders
	SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* ___VRMSupportedShaders_3;
};

// UniGLTF.ShaderPropExporter.PreShaderPropExporter
struct PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E  : public RuntimeObject
{
};

struct PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields
{
	// System.String[] UniGLTF.ShaderPropExporter.PreShaderPropExporter::VRMExtensionShaders
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___VRMExtensionShaders_0;
	// System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::m_shaderPropMap
	Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* ___m_shaderPropMap_1;
};

// UniGLTF.ShaderPropExporter.ShaderProps
struct ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91  : public RuntimeObject
{
	// UniGLTF.ShaderPropExporter.ShaderProperty[] UniGLTF.ShaderPropExporter.ShaderProps::Properties
	ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* ___Properties_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>
struct KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UniGLTF.ShaderPropExporter.PreExportShaderAttribute
struct PreExportShaderAttribute_tCC6DA96141C9112C04597DFBFF3422F920620125  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UniGLTF.ShaderPropExporter.PreExportShadersAttribute
struct PreExportShadersAttribute_t5CAEAED552C3F91D57631CA844CFEB726551DEAE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 
{
	// System.String UniGLTF.ShaderPropExporter.ShaderProperty::Key
	String_t* ___Key_0;
	// UniGLTF.ShaderPropExporter.ShaderPropertyType UniGLTF.ShaderPropExporter.ShaderProperty::ShaderPropertyType
	int32_t ___ShaderPropertyType_1;
};
// Native definition for P/Invoke marshalling of UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_pinvoke
{
	char* ___Key_0;
	int32_t ___ShaderPropertyType_1;
};
// Native definition for COM marshalling of UniGLTF.ShaderPropExporter.ShaderProperty
struct ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_com
{
	Il2CppChar* ___Key_0;
	int32_t ___ShaderPropertyType_1;
};

// UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 
{
	// System.String UniGLTF.ShaderPropExporter.SupportedShader::TargetFolder
	String_t* ___TargetFolder_0;
	// System.String UniGLTF.ShaderPropExporter.SupportedShader::ShaderName
	String_t* ___ShaderName_1;
};
// Native definition for P/Invoke marshalling of UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_pinvoke
{
	char* ___TargetFolder_0;
	char* ___ShaderName_1;
};
// Native definition for COM marshalling of UniGLTF.ShaderPropExporter.SupportedShader
struct SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_com
{
	Il2CppChar* ___TargetFolder_0;
	Il2CppChar* ___ShaderName_1;
};

// System.Void
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UniGLTF.ShaderPropExporter.SupportedShader[]
struct SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE  : public RuntimeArray
{
	ALIGN_FIELD (8) SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 m_Items[1];

	inline SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TargetFolder_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ShaderName_1), (void*)NULL);
		#endif
	}
	inline SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___TargetFolder_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ShaderName_1), (void*)NULL);
		#endif
	}
};
// UniGLTF.ShaderPropExporter.ShaderProperty[]
struct ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739  : public RuntimeArray
{
	ALIGN_FIELD (8) ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 m_Items[1];

	inline ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
	}
	inline ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;

// System.Void UniGLTF.ShaderPropExporter.SupportedShader::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3* __this, String_t* ___targetFolder0, String_t* ___shaderName1, const RuntimeMethod* method) ;
// System.Void UniGLTF.ShaderPropExporter.ShaderProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3 (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* __this, const RuntimeMethod* method) ;
// System.Void UniGLTF.ShaderPropExporter.ShaderProperty::.ctor(System.String,UniGLTF.ShaderPropExporter.ShaderPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282 (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9* __this, String_t* ___key0, int32_t ___propType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77 (KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0* __this, String_t* ___key0, ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0*, String_t*, ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::.ctor()
inline void Dictionary_2__ctor_mA0243B09CE9F99EAA6BBF3C111F697AE23A4F383 (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1302F53E506205630271B1950D05B5A024FE67CB_inline (KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::get_Value()
inline ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* KeyValuePair_2_get_Value_mB09B2FF14CBB25D9002FFD6BC1DEE8E5435CC3B5_inline (KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0* __this, const RuntimeMethod* method)
{
	return ((  ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* (*) (KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::Add(TKey,TValue)
inline void Dictionary_2_Add_m1EC761CE0E8D8F1E0C1FEFB82D6872F3368E030B (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* __this, String_t* ___key0, ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF*, String_t*, ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mDD7A09F4B32AC1ECF17FD63CE0670C5D3E64910D (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* __this, String_t* ___key0, ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF*, String_t*, ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShaders::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShaders__cctor_m7AE3CC2D78F8C976B9FBFCD46349DEC57C2CCE7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static SupportedShader[] SupportedShaders = new SupportedShader[]
		// {
		//     new SupportedShader(GLTF_FOLDER, "Standard"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Color"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Texture"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Transparent"),
		//     new SupportedShader(GLTF_FOLDER, "Unlit/Transparent Cutout"),
		//     new SupportedShader(GLTF_FOLDER, "UniGLTF/UniUnlit"),
		// };
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_0 = (SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE*)(SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE*)SZArrayNew(SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE_il2cpp_TypeInfo_var, (uint32_t)6);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_1 = L_0;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_2), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_2);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_3 = L_1;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_4), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_4);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_5 = L_3;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_6), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_6);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_7 = L_5;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_8), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_8);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_9 = L_7;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_10), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_10);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_11 = L_9;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_12), _stringLiteralF7E036A7287E045F5E38E88E1353378D34EA6742, _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_12);
		((PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_StaticFields*)il2cpp_codegen_static_fields_for(PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_il2cpp_TypeInfo_var))->___SupportedShaders_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_StaticFields*)il2cpp_codegen_static_fields_for(PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_il2cpp_TypeInfo_var))->___SupportedShaders_1), (void*)L_11);
		// public static SupportedShader[] VRMSupportedShaders = new SupportedShader[]
		// {
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/MToon"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTexture"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitCutout"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTransparent"),
		//     new SupportedShader(VRM_TARGET_FOLDER, "VRM/UnlitTransparentZWrite"),
		// };
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_13 = (SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE*)(SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE*)SZArrayNew(SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE_il2cpp_TypeInfo_var, (uint32_t)5);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_14 = L_13;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_15;
		memset((&L_15), 0, sizeof(L_15));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_15), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669, /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_15);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_16 = L_14;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_17;
		memset((&L_17), 0, sizeof(L_17));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_17), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_17);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_18 = L_16;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_19;
		memset((&L_19), 0, sizeof(L_19));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_19), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_19);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_20 = L_18;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_21;
		memset((&L_21), 0, sizeof(L_21));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_21), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_21);
		SupportedShaderU5BU5D_t978E656A9E65B0DD5963D250FA5642D031C146FE* L_22 = L_20;
		SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3 L_23;
		memset((&L_23), 0, sizeof(L_23));
		SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE((&L_23), _stringLiteral65982B6B86E52F811F1B0E4E4B9603B322156D9C, _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3)L_23);
		((PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_StaticFields*)il2cpp_codegen_static_fields_for(PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_il2cpp_TypeInfo_var))->___VRMSupportedShaders_3 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_StaticFields*)il2cpp_codegen_static_fields_for(PreExportShaders_tFD340EEFD0E62D0773373C478B1626DB41422813_il2cpp_TypeInfo_var))->___VRMSupportedShaders_3), (void*)L_22);
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
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Standard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_Standard_m770F5F2EC94A939E0C17941F4FFBA7E25381C40D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB06293E3070D888955542383617A31852FFF8DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Standard",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_Glossiness", ShaderPropertyType.Range)
		// ,new ShaderProperty("_GlossMapScale", ShaderPropertyType.Range)
		// ,new ShaderProperty("_SmoothnessTextureChannel", ShaderPropertyType.Float)
		// ,new ShaderProperty("_Metallic", ShaderPropertyType.Range)
		// ,new ShaderProperty("_MetallicGlossMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_SpecularHighlights", ShaderPropertyType.Float)
		// ,new ShaderProperty("_GlossyReflections", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Parallax", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ParallaxMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OcclusionStrength", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OcclusionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_EmissionColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_EmissionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailMask", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailAlbedoMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_DetailNormalMapScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DetailNormalMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_UVSec", ShaderPropertyType.Float)
		// ,new ShaderProperty("_Mode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_5 = L_3;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_6), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_6);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_7 = L_5;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_8), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_8);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_9 = L_7;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_10), _stringLiteralA2A3DF99788A73C2F0FE7267B988915F72D2C1F1, 2, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_10);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_11 = L_9;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_12), _stringLiteralAC2205CB3AEC457605CBAE18F9FEEECC950BD105, 2, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_12);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_13 = L_11;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_14), _stringLiteral51E77BE760A981E17113C4BA376BD85874B58A45, 3, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_14);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_15 = L_13;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_16), _stringLiteral7F94A8E8715AB28B4A3A63F016AFABE058C94FF0, 2, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_16);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_17 = L_15;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_18), _stringLiteralE147FC8F66BE740F2F8674E00CBC75BC21B73934, 0, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_18);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_19 = L_17;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_20), _stringLiteral38B8C8C0BD25C5963BB0276F350E52AE4F3288D3, 3, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_20);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_21 = L_19;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_22;
		memset((&L_22), 0, sizeof(L_22));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_22), _stringLiteral6E08E58AD13E5769D3AFD33FB33C17E306122492, 3, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_22);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_23 = L_21;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_24;
		memset((&L_24), 0, sizeof(L_24));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_24), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, 3, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_24);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_25 = L_23;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_26), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_26);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_27 = L_25;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_28;
		memset((&L_28), 0, sizeof(L_28));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_28), _stringLiteralF0D9104AB624D4BF63F12ED168216DC1948D19B8, 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_28);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_29 = L_27;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_30;
		memset((&L_30), 0, sizeof(L_30));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_30), _stringLiteralCB06293E3070D888955542383617A31852FFF8DF, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_30);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_31 = L_29;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_32;
		memset((&L_32), 0, sizeof(L_32));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_32), _stringLiteral4FC108C6FF0A706B87BCEE07E7584DC45FD16B4B, 2, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_32);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_33 = L_31;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_34;
		memset((&L_34), 0, sizeof(L_34));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_34), _stringLiteral40BFB095782D36D1B276A40A276C76911EF9318F, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_34);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_35 = L_33;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_36;
		memset((&L_36), 0, sizeof(L_36));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_36), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, 1, /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_36);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_37 = L_35;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_38;
		memset((&L_38), 0, sizeof(L_38));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_38), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, 0, /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_38);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_39 = L_37;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_40;
		memset((&L_40), 0, sizeof(L_40));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_40), _stringLiteralEA079692DED56FA02201B916BF75CCB06628ED3B, 0, /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_40);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_41 = L_39;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_42;
		memset((&L_42), 0, sizeof(L_42));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_42), _stringLiteral58D77E1ECF3579ADA2EDE01E1640D1E1CA4A37E8, 0, /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_42);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_43 = L_41;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_44;
		memset((&L_44), 0, sizeof(L_44));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_44), _stringLiteralDF17A9BFA8A9CE193E1BCDFA78953986FDA621F1, 3, /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_44);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_45 = L_43;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_46;
		memset((&L_46), 0, sizeof(L_46));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_46), _stringLiteral60BECFD9EBE7638FECA5779A69100169C8558400, 0, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_46);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_47 = L_45;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_48), _stringLiteralF42B6EC895E3DC70F8183E72033DF05F5B5CF6D2, 3, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_48);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_49 = L_47;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_50;
		memset((&L_50), 0, sizeof(L_50));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_50), _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, 3, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_50);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_51 = L_49;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_52;
		memset((&L_52), 0, sizeof(L_52));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_52), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_52);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_53 = L_51;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_54;
		memset((&L_54), 0, sizeof(L_54));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_54), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_54);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_55 = L_53;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_56;
		memset((&L_56), 0, sizeof(L_56));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_56), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_56);
		NullCheck(L_1);
		L_1->___Properties_0 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_55);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_57 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_58;
		memset((&L_58), 0, sizeof(L_58));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_58), _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, L_57, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_58;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_UniGLTF_UniUnlit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_UniGLTF_UniUnlit_mE250B6D28FB54A6AFED114131E5752749219AFBF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "UniGLTF/UniUnlit",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_BlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_CullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_VColBlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_5 = L_3;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_6), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_6);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_7 = L_5;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_8), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_8);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_9 = L_7;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_10), _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, 3, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_10);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_11 = L_9;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_12), _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 3, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_12);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_13 = L_11;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_14), _stringLiteralC8E54DC0584021FDD77DA842B94FD97F28B5A628, 3, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_14);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_15 = L_13;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_16), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_16);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_17 = L_15;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_18), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_18);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_19 = L_17;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_20), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_20);
		NullCheck(L_1);
		L_1->___Properties_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_19);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_21 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_22), _stringLiteral9D069221DE352372E43A85A2868AE71709AFBC3F, L_21, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_22;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_Unlit_Color_m5C27BEBB5AB4842F30F1D94E71342A330D6E2A70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Color",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Color", ShaderPropertyType.Color)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		NullCheck(L_1);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_5 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_6), _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, L_5, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_Unlit_Texture_m784822B229B0657093C53EBEB6346A9DCE5D8D40 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Texture",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		NullCheck(L_1);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_5 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_6), _stringLiteral684F9F5743C3D1DE5AF358333F20040FBA298574, L_5, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Transparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_Unlit_Transparent_m74811D559A78EF9F2830DAF545257A16A2011FA5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Transparent",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		NullCheck(L_1);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_5 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_6), _stringLiteralB9AD78CBFE96EFE3227B6F467DA563E5F6136C6B, L_5, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_Unlit_Transparent_Cutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_Unlit_Transparent_Cutout_mF12C89C2D4764A2B0FB271466473287D30E46A6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "Unlit/Transparent Cutout",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)2);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_5 = L_3;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_6), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_6);
		NullCheck(L_1);
		L_1->___Properties_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_5);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_7 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_8), _stringLiteral5EAA19E6B3D79923759AC0F3C611403170C03B32, L_7, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_8;
	}
}
// UniGLTF.ShaderPropExporter.ShaderProps UniGLTF.ShaderPropExporter.PreShaderPropExporter::GetPropsForSupportedShader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* PreShaderPropExporter_GetPropsForSupportedShader_m83C332420D67AC339278F052EA491B2A256AB163 (String_t* ___shaderName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1EC761CE0E8D8F1E0C1FEFB82D6872F3368E030B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mDD7A09F4B32AC1ECF17FD63CE0670C5D3E64910D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA0243B09CE9F99EAA6BBF3C111F697AE23A4F383_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1302F53E506205630271B1950D05B5A024FE67CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB09B2FF14CBB25D9002FFD6BC1DEE8E5435CC3B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreExportShaderAttribute_tCC6DA96141C9112C04597DFBFF3422F920620125_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (m_shaderPropMap == null)
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var);
		Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* L_0 = ((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___m_shaderPropMap_1;
		if (L_0)
		{
			goto IL_0074;
		}
	}
	{
		// m_shaderPropMap = new Dictionary<string, ShaderProps>();
		Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* L_1 = (Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF*)il2cpp_codegen_object_new(Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA0243B09CE9F99EAA6BBF3C111F697AE23A4F383(L_1, Dictionary_2__ctor_mA0243B09CE9F99EAA6BBF3C111F697AE23A4F383_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var);
		((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___m_shaderPropMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___m_shaderPropMap_1), (void*)L_1);
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_4;
		L_4 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(103 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_3, ((int32_t)56));
		V_1 = L_4;
		V_2 = 0;
		goto IL_006e;
	}

IL_0027:
	{
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		PropertyInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (prop.GetCustomAttributes(typeof(PreExportShaderAttribute), true).Any())
		PropertyInfo_t* L_9 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (PreExportShaderAttribute_tCC6DA96141C9112C04597DFBFF3422F920620125_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		NullCheck(L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_9, L_11, (bool)1);
		bool L_13;
		L_13 = Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847((RuntimeObject*)L_12, Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// var kv = (KeyValuePair<string, ShaderProps>)prop.GetValue(null, null);
		PropertyInfo_t* L_14 = V_3;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_14, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		V_4 = ((*(KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0*)((KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0*)(KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0*)UnBox(L_15, KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0_il2cpp_TypeInfo_var))));
		// m_shaderPropMap.Add(kv.Key, kv.Value);
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var);
		Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* L_16 = ((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___m_shaderPropMap_1;
		String_t* L_17;
		L_17 = KeyValuePair_2_get_Key_m1302F53E506205630271B1950D05B5A024FE67CB_inline((&V_4), KeyValuePair_2_get_Key_m1302F53E506205630271B1950D05B5A024FE67CB_RuntimeMethod_var);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_18;
		L_18 = KeyValuePair_2_get_Value_mB09B2FF14CBB25D9002FFD6BC1DEE8E5435CC3B5_inline((&V_4), KeyValuePair_2_get_Value_mB09B2FF14CBB25D9002FFD6BC1DEE8E5435CC3B5_RuntimeMethod_var);
		NullCheck(L_16);
		Dictionary_2_Add_m1EC761CE0E8D8F1E0C1FEFB82D6872F3368E030B(L_16, L_17, L_18, Dictionary_2_Add_m1EC761CE0E8D8F1E0C1FEFB82D6872F3368E030B_RuntimeMethod_var);
	}

IL_006a:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006e:
	{
		// foreach (var prop in typeof(PreShaderPropExporter).GetProperties(BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic))
		int32_t L_20 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0027;
		}
	}

IL_0074:
	{
		// if (m_shaderPropMap.TryGetValue(shaderName, out props))
		il2cpp_codegen_runtime_class_init_inline(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var);
		Dictionary_2_tCB6C85D92F0FA9CFFFE7D4F1AA2915464C6D2DCF* L_22 = ((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___m_shaderPropMap_1;
		String_t* L_23 = ___shaderName0;
		NullCheck(L_22);
		bool L_24;
		L_24 = Dictionary_2_TryGetValue_mDD7A09F4B32AC1ECF17FD63CE0670C5D3E64910D(L_22, L_23, (&V_0), Dictionary_2_TryGetValue_mDD7A09F4B32AC1ECF17FD63CE0670C5D3E64910D_RuntimeMethod_var);
		if (!L_24)
		{
			goto IL_0085;
		}
	}
	{
		// return props;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_25 = V_0;
		return L_25;
	}

IL_0085:
	{
		// return null;
		return (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)NULL;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_MToon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_VRM_MToon_mD4075D49BFACB21DF5807D65389240389D10D239 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral034DB7F22AE9CBA3CDE4D7145D0B332C6E3587C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186805D5F75DD57BBE3EBEC2531DA33F1EB8A9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral304134432E5962CF6674E58878A873D81198CAEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E5B38553E51419924E8EC9DF17949D13973236);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524916C9AA35BA4551E0A4C370367926BF3F833B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59B259A263D1796F7617C20534034F94A19001FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD19F7F98535163D0D028CDFC22AE9D046E010719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91B8361199214452AAF163E796839A54971EEA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/MToon",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// ,new ShaderProperty("_Color", ShaderPropertyType.Color)
		// ,new ShaderProperty("_ShadeColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadeTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_BumpScale", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BumpMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ReceiveShadowRate", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ReceiveShadowTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadingGradeRate", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ShadingGradeTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_ShadeShift", ShaderPropertyType.Range)
		// ,new ShaderProperty("_ShadeToony", ShaderPropertyType.Range)
		// ,new ShaderProperty("_LightColorAttenuation", ShaderPropertyType.Range)
		// ,new ShaderProperty("_IndirectLightIntensity", ShaderPropertyType.Range)
		// ,new ShaderProperty("_RimColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_RimTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_RimLightingMix", ShaderPropertyType.Range)
		// ,new ShaderProperty("_RimFresnelPower", ShaderPropertyType.Range)
		// ,new ShaderProperty("_RimLift", ShaderPropertyType.Range)
		// ,new ShaderProperty("_SphereAdd", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_EmissionColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_EmissionMap", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OutlineWidthTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_OutlineWidth", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OutlineScaledMaxDistance", ShaderPropertyType.Range)
		// ,new ShaderProperty("_OutlineColor", ShaderPropertyType.Color)
		// ,new ShaderProperty("_OutlineLightingMix", ShaderPropertyType.Range)
		// ,new ShaderProperty("_UvAnimMaskTexture", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_UvAnimScrollX", ShaderPropertyType.Float)
		// ,new ShaderProperty("_UvAnimScrollY", ShaderPropertyType.Float)
		// ,new ShaderProperty("_UvAnimRotation", ShaderPropertyType.Float)
		// ,new ShaderProperty("_MToonVersion", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DebugMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_BlendMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineWidthMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineColorMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_CullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_OutlineCullMode", ShaderPropertyType.Float)
		// ,new ShaderProperty("_SrcBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_DstBlend", ShaderPropertyType.Float)
		// ,new ShaderProperty("_ZWrite", ShaderPropertyType.Float)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)((int32_t)42));
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_5 = L_3;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_6), _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, 1, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_6);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_7 = L_5;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_8), _stringLiteral9E489994D4C2D1FB6036C4A637D4B30F1BD119D5, 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_8);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_9 = L_7;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_10), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_10);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_11 = L_9;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_12;
		memset((&L_12), 0, sizeof(L_12));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_12), _stringLiteral1232F1D4055DAD90B2422B989CED7F4FE55A98C9, 0, /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_12);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_13 = L_11;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_14), _stringLiteral915923FF23DAC30B2D70516B4F5D56256E060201, 3, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_14);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_15 = L_13;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_16), _stringLiteral9BF9FDA83C54B3E4D921C2ABBCF673E2E2E37FBA, 0, /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_16);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_17 = L_15;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_18;
		memset((&L_18), 0, sizeof(L_18));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_18), _stringLiteral93FF374E13B6170A58BCF7F129DE52B26AE7DFDC, 2, /*hidden argument*/NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_18);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_19 = L_17;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_20;
		memset((&L_20), 0, sizeof(L_20));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_20), _stringLiteral30E5B38553E51419924E8EC9DF17949D13973236, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_20);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_21 = L_19;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_22;
		memset((&L_22), 0, sizeof(L_22));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_22), _stringLiteral650165F35FFDCCFC9A135C7EF035B30377DD7229, 2, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_22);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_23 = L_21;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_24;
		memset((&L_24), 0, sizeof(L_24));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_24), _stringLiteral190F8E7A2EE5F0ECB5F3B99A48BCF468A59D1526, 0, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_24);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_25 = L_23;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_26;
		memset((&L_26), 0, sizeof(L_26));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_26), _stringLiteral1DFC8F10738E456123C54F4B530A50ABDDD1ED90, 2, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_26);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_27 = L_25;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_28;
		memset((&L_28), 0, sizeof(L_28));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_28), _stringLiteral3AB3801D5903DC14A1F0FABE51F8060D38C36BCE, 2, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_28);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_29 = L_27;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_30;
		memset((&L_30), 0, sizeof(L_30));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_30), _stringLiteralADC17917ABE91ECE45DB8FC83D1E5AE5D561978E, 2, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_30);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_31 = L_29;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_32;
		memset((&L_32), 0, sizeof(L_32));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_32), _stringLiteralC1FD6731DCC40BEB999541837AEACC56DC18E0CF, 2, /*hidden argument*/NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_32);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_33 = L_31;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_34;
		memset((&L_34), 0, sizeof(L_34));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_34), _stringLiteral8DBC409A48FD48A34B9E60321248E9ABEE0C81A6, 1, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_34);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_35 = L_33;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_36;
		memset((&L_36), 0, sizeof(L_36));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_36), _stringLiteralD19F7F98535163D0D028CDFC22AE9D046E010719, 0, /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_36);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_37 = L_35;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_38;
		memset((&L_38), 0, sizeof(L_38));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_38), _stringLiteral0FAEA17123A0108E29C58DD38088937111DE9A4F, 2, /*hidden argument*/NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_38);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_39 = L_37;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_40;
		memset((&L_40), 0, sizeof(L_40));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_40), _stringLiteral17F5B715255AB83B4B841256DE9A6D68885E2373, 2, /*hidden argument*/NULL);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_40);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_41 = L_39;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_42;
		memset((&L_42), 0, sizeof(L_42));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_42), _stringLiteralB33AB934A58D128D90E13E5323024A4F181380D7, 2, /*hidden argument*/NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_42);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_43 = L_41;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_44;
		memset((&L_44), 0, sizeof(L_44));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_44), _stringLiteralBA742A186906F0F8C7697B6B0E504781DA1064D7, 0, /*hidden argument*/NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_44);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_45 = L_43;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_46;
		memset((&L_46), 0, sizeof(L_46));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_46), _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, 1, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_46);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_47 = L_45;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_48;
		memset((&L_48), 0, sizeof(L_48));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_48), _stringLiteralB32F137D7398FFB53E5E7ACA2526882ADE8473A6, 0, /*hidden argument*/NULL);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_48);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_49 = L_47;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_50;
		memset((&L_50), 0, sizeof(L_50));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_50), _stringLiteral19B50A6FEDC2668C350DF299DDC83E1A4873D7C9, 0, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_50);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_51 = L_49;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_52;
		memset((&L_52), 0, sizeof(L_52));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_52), _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, 2, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_52);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_53 = L_51;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_54;
		memset((&L_54), 0, sizeof(L_54));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_54), _stringLiteralF77AA42AA2620E7B5DEE6C75E8A77962B0B6B2CF, 2, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_54);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_55 = L_53;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_56;
		memset((&L_56), 0, sizeof(L_56));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_56), _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, 1, /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_56);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_57 = L_55;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_58;
		memset((&L_58), 0, sizeof(L_58));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_58), _stringLiteralBE5A164234C945013CE7F044C3EE99C37CD7930D, 2, /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_58);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_59 = L_57;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_60;
		memset((&L_60), 0, sizeof(L_60));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_60), _stringLiteralE91B8361199214452AAF163E796839A54971EEA7, 0, /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_60);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_61 = L_59;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_62;
		memset((&L_62), 0, sizeof(L_62));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_62), _stringLiteral304134432E5962CF6674E58878A873D81198CAEB, 3, /*hidden argument*/NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_62);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_63 = L_61;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_64;
		memset((&L_64), 0, sizeof(L_64));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_64), _stringLiteral186805D5F75DD57BBE3EBEC2531DA33F1EB8A9BE, 3, /*hidden argument*/NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_64);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_65 = L_63;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_66;
		memset((&L_66), 0, sizeof(L_66));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_66), _stringLiteral034DB7F22AE9CBA3CDE4D7145D0B332C6E3587C0, 3, /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_66);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_67 = L_65;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_68;
		memset((&L_68), 0, sizeof(L_68));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_68), _stringLiteral524916C9AA35BA4551E0A4C370367926BF3F833B, 3, /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_68);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_69 = L_67;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_70;
		memset((&L_70), 0, sizeof(L_70));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_70), _stringLiteralD0059090FADDF02EED2889EC3EF70CE420AAA5C9, 3, /*hidden argument*/NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_70);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_71 = L_69;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_72;
		memset((&L_72), 0, sizeof(L_72));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_72), _stringLiteralA69C83831B4753F9D2B4F65C16372EA1A6F0482F, 3, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_72);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_73 = L_71;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_74;
		memset((&L_74), 0, sizeof(L_74));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_74), _stringLiteral2C5DEF38C3D3689AB6F719BCC283EB0DFE8BCFDE, 3, /*hidden argument*/NULL);
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_74);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_75 = L_73;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_76;
		memset((&L_76), 0, sizeof(L_76));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_76), _stringLiteral81D9EDA345C5B40F47464B7A3FDD94805B6F86E2, 3, /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_76);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_77 = L_75;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_78;
		memset((&L_78), 0, sizeof(L_78));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_78), _stringLiteral59B259A263D1796F7617C20534034F94A19001FE, 3, /*hidden argument*/NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_78);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_79 = L_77;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_80;
		memset((&L_80), 0, sizeof(L_80));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_80), _stringLiteral7F71C428308BBDDAA9B87455C2B687167C3F78A5, 3, /*hidden argument*/NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_80);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_81 = L_79;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_82;
		memset((&L_82), 0, sizeof(L_82));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_82), _stringLiteral3708CDBCC9F390AB99D52FE7DEE4724401B69B9F, 3, /*hidden argument*/NULL);
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_82);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_83 = L_81;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_84;
		memset((&L_84), 0, sizeof(L_84));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_84), _stringLiteral73B13DE9817379145386BC6ECC87E983FC8ED41A, 3, /*hidden argument*/NULL);
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_84);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_85 = L_83;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_86;
		memset((&L_86), 0, sizeof(L_86));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_86), _stringLiteralB25CF1C6B74339FBFCE846454A70688CE58C094C, 3, /*hidden argument*/NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_86);
		NullCheck(L_1);
		L_1->___Properties_0 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_85);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_87 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_88;
		memset((&L_88), 0, sizeof(L_88));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_88), _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669, L_87, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_88;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitCutout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_VRM_UnlitCutout_m3BBCEBD766E4DFEBE14E33FA75B98CEB703D15CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral326129114EB43E5A03AD980A3709D55FE7934916);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitCutout",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// ,new ShaderProperty("_Cutoff", ShaderPropertyType.Range)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)2);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_5 = L_3;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_6), _stringLiteral326129114EB43E5A03AD980A3709D55FE7934916, 2, /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_6);
		NullCheck(L_1);
		L_1->___Properties_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_5);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_7 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_8;
		memset((&L_8), 0, sizeof(L_8));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_8), _stringLiteral5CA1EA9A1B125DBC8227444B69329446BAE7DBE6, L_7, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_8;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_VRM_UnlitTexture_mD412CE457AB499FB186A59155A679895B3C09A2E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTexture",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		NullCheck(L_1);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_5 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_6), _stringLiteralDC36021300B277DA11A9B13D4303D3176FF7F2D7, L_5, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTransparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_VRM_UnlitTransparent_m4DCF8D353C21AFE217131D70ECC598D2A2E5A5FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTransparent",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		NullCheck(L_1);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_5 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_6), _stringLiteral7508FBFA90989A889507F7A38F1F0BFFB25CE421, L_5, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_6;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,UniGLTF.ShaderPropExporter.ShaderProps> UniGLTF.ShaderPropExporter.PreShaderPropExporter::get_VRM_UnlitTransparentZWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 PreShaderPropExporter_get_VRM_UnlitTransparentZWrite_mAE2F75661FED18350CD1B788FB95E598E9B2E8E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		s_Il2CppMethodInitialized = true;
	}
	ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* V_0 = NULL;
	{
		//                 return new KeyValuePair<string, ShaderProps>(
		//                     "VRM/UnlitTransparentZWrite",
		//                     new ShaderProps
		//                     {
		//                         Properties = new ShaderProperty[]{
		// new ShaderProperty("_MainTex", ShaderPropertyType.TexEnv)
		// 
		//                         }
		//                     }
		//                 );
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_0 = (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91*)il2cpp_codegen_object_new(ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3(L_0, NULL);
		V_0 = L_0;
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_1 = V_0;
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_2 = (ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739*)SZArrayNew(ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739_il2cpp_TypeInfo_var, (uint32_t)1);
		ShaderPropertyU5BU5D_t9AAFC9DF6BF4A1AEBBE8114D6FD29F6DBFCA8739* L_3 = L_2;
		ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9 L_4;
		memset((&L_4), 0, sizeof(L_4));
		ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282((&L_4), _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9)L_4);
		NullCheck(L_1);
		L_1->___Properties_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Properties_0), (void*)L_3);
		ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* L_5 = V_0;
		KeyValuePair_2_t1EF9E58F602D892E41CB676A9A2D38A343EBD6C0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77((&L_6), _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76, L_5, /*hidden argument*/KeyValuePair_2__ctor_m0CC978B6744C65996280545570DDBBE768BDBB77_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void UniGLTF.ShaderPropExporter.PreShaderPropExporter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreShaderPropExporter__cctor_m5B6FF2EFC65B51B6A9228A2276173CF202840859 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string[] VRMExtensionShaders = new string[]
		// {
		//     "VRM/UnlitTransparentZWrite",
		//     "VRM/MToon"
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDBA7C831DC50E7E9885CC3A53919297A72C39B76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1CF7FFDB31D8970F37EDC72C88111329205F9669);
		((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___VRMExtensionShaders_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_StaticFields*)il2cpp_codegen_static_fields_for(PreShaderPropExporter_t6B35D10BED3348673BB9B3ECBA156A3A877BDD1E_il2cpp_TypeInfo_var))->___VRMExtensionShaders_0), (void*)L_2);
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShadersAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShadersAttribute__ctor_mCE7A5B1B4EB7F8E054BD06BBE9D882C9FA1364B7 (PreExportShadersAttribute_t5CAEAED552C3F91D57631CA844CFEB726551DEAE* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void UniGLTF.ShaderPropExporter.PreExportShaderAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreExportShaderAttribute__ctor_mDC82411F18DF7AF8806FCF336E7DFCBA3024789A (PreExportShaderAttribute_tCC6DA96141C9112C04597DFBFF3422F920620125* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshal_pinvoke(const SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3& unmarshaled, SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_pinvoke& marshaled)
{
	marshaled.___TargetFolder_0 = il2cpp_codegen_marshal_string(unmarshaled.___TargetFolder_0);
	marshaled.___ShaderName_1 = il2cpp_codegen_marshal_string(unmarshaled.___ShaderName_1);
}
IL2CPP_EXTERN_C void SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshal_pinvoke_back(const SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_pinvoke& marshaled, SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3& unmarshaled)
{
	unmarshaled.___TargetFolder_0 = il2cpp_codegen_marshal_string_result(marshaled.___TargetFolder_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TargetFolder_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___TargetFolder_0));
	unmarshaled.___ShaderName_1 = il2cpp_codegen_marshal_string_result(marshaled.___ShaderName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ShaderName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ShaderName_1));
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshal_pinvoke_cleanup(SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___TargetFolder_0);
	marshaled.___TargetFolder_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ShaderName_1);
	marshaled.___ShaderName_1 = NULL;
}
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshal_com(const SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3& unmarshaled, SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_com& marshaled)
{
	marshaled.___TargetFolder_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___TargetFolder_0);
	marshaled.___ShaderName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ShaderName_1);
}
IL2CPP_EXTERN_C void SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshal_com_back(const SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_com& marshaled, SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3& unmarshaled)
{
	unmarshaled.___TargetFolder_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___TargetFolder_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TargetFolder_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___TargetFolder_0));
	unmarshaled.___ShaderName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ShaderName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ShaderName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ShaderName_1));
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.SupportedShader
IL2CPP_EXTERN_C void SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshal_com_cleanup(SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___TargetFolder_0);
	marshaled.___TargetFolder_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ShaderName_1);
	marshaled.___ShaderName_1 = NULL;
}
// System.Void UniGLTF.ShaderPropExporter.SupportedShader::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE (SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3* __this, String_t* ___targetFolder0, String_t* ___shaderName1, const RuntimeMethod* method) 
{
	{
		// TargetFolder = targetFolder;
		String_t* L_0 = ___targetFolder0;
		__this->___TargetFolder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetFolder_0), (void*)L_0);
		// ShaderName = shaderName;
		String_t* L_1 = ___shaderName1;
		__this->___ShaderName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ShaderName_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE_AdjustorThunk (RuntimeObject* __this, String_t* ___targetFolder0, String_t* ___shaderName1, const RuntimeMethod* method)
{
	SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SupportedShader_t78D3C4FEBC32DD84917EA4EC70C4D0C936DC6AE3*>(__this + _offset);
	SupportedShader__ctor_m6ACD2F8E790CA38F6D81E5EAEE8CECB8998E45FE(_thisAdjusted, ___targetFolder0, ___shaderName1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshal_pinvoke(const ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9& unmarshaled, ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_pinvoke& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_string(unmarshaled.___Key_0);
	marshaled.___ShaderPropertyType_1 = unmarshaled.___ShaderPropertyType_1;
}
IL2CPP_EXTERN_C void ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshal_pinvoke_back(const ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_pinvoke& marshaled, ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9& unmarshaled)
{
	unmarshaled.___Key_0 = il2cpp_codegen_marshal_string_result(marshaled.___Key_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Key_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Key_0));
	int32_t unmarshaledShaderPropertyType_temp_1 = 0;
	unmarshaledShaderPropertyType_temp_1 = marshaled.___ShaderPropertyType_1;
	unmarshaled.___ShaderPropertyType_1 = unmarshaledShaderPropertyType_temp_1;
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshal_pinvoke_cleanup(ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
}
// Conversion methods for marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshal_com(const ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9& unmarshaled, ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_com& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Key_0);
	marshaled.___ShaderPropertyType_1 = unmarshaled.___ShaderPropertyType_1;
}
IL2CPP_EXTERN_C void ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshal_com_back(const ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_com& marshaled, ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9& unmarshaled)
{
	unmarshaled.___Key_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Key_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0));
	int32_t unmarshaledShaderPropertyType_temp_1 = 0;
	unmarshaledShaderPropertyType_temp_1 = marshaled.___ShaderPropertyType_1;
	unmarshaled.___ShaderPropertyType_1 = unmarshaledShaderPropertyType_temp_1;
}
// Conversion method for clean up from marshalling of: UniGLTF.ShaderPropExporter.ShaderProperty
IL2CPP_EXTERN_C void ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshal_com_cleanup(ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
}
// System.Void UniGLTF.ShaderPropExporter.ShaderProperty::.ctor(System.String,UniGLTF.ShaderPropExporter.ShaderPropertyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282 (ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9* __this, String_t* ___key0, int32_t ___propType1, const RuntimeMethod* method) 
{
	{
		// Key = key;
		String_t* L_0 = ___key0;
		__this->___Key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Key_0), (void*)L_0);
		// ShaderPropertyType = propType;
		int32_t L_1 = ___propType1;
		__this->___ShaderPropertyType_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282_AdjustorThunk (RuntimeObject* __this, String_t* ___key0, int32_t ___propType1, const RuntimeMethod* method)
{
	ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ShaderProperty_t92DD56CD62AB057B21302577F7CA9E25E9E2FEF9*>(__this + _offset);
	ShaderProperty__ctor_mCEF523041FB04F3794F2E2F1ACCD1F188942E282(_thisAdjusted, ___key0, ___propType1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniGLTF.ShaderPropExporter.ShaderProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderProps__ctor_mC2FC0F337183818536D4CD7602ED909024B0FBB3 (ShaderProps_tDD6C3BD8868B0F0A94C1B412F279A2DA76094D91* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
