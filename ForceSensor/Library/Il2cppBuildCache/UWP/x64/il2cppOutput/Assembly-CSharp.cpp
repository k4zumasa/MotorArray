#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.List`1<System.String>[]
struct List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.IO.Ports.SerialPort
struct SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// canvasManager
struct canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F;
// csvHandler
struct csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680;
// ex2canvasManager
struct ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705;
// ex2csvHandler
struct ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496;
// pinArrayManager
struct pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD;
// serialManager
struct serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral053DA1130F1A3E18467DAFFC69ECFFA484F12DB9;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0AA2D901F5B20D59FCF9CC9AE7C7CF00DB83D490;
IL2CPP_EXTERN_C String_t* _stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680;
IL2CPP_EXTERN_C String_t* _stringLiteral1397641DBAA59DF76A7817204222D80B2B18DDA0;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral1E541017DD5DBD750FC9FF768C52C5C1C89FB541;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E;
IL2CPP_EXTERN_C String_t* _stringLiteral3DBFA78756A89FB292803470DE98175040F814E9;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD8951DA84B68D5B2FE0879AA1C22DF22738BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral3E62A28E6D19717C05020E9E9670CB0BA9AD7F9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral5524BD9C473124B5873B5CA0214876053B0AB165;
IL2CPP_EXTERN_C String_t* _stringLiteral63D72F3B20FC8764604129E0F8CEE6B9775745A2;
IL2CPP_EXTERN_C String_t* _stringLiteral67E3917459AA92D4A01982EE3E9D27BFA57AD8F4;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76A80085B7D8B56CB4CF9A6E7A48B3502974F1AB;
IL2CPP_EXTERN_C String_t* _stringLiteral7A357F7EB0458F106B7AF258E8A13873F1713AAE;
IL2CPP_EXTERN_C String_t* _stringLiteral7C5455A057A13FBE5E11D06582D3E0D47B8CF8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral86F9CDF3972D89E2F93818CDEA436D60B0F98040;
IL2CPP_EXTERN_C String_t* _stringLiteral872CAD4CA2C6627CB6131C62855A78319B8645C8;
IL2CPP_EXTERN_C String_t* _stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA;
IL2CPP_EXTERN_C String_t* _stringLiteral9BB4EBEFDB80699436D4A397ED2789A8C106E353;
IL2CPP_EXTERN_C String_t* _stringLiteralA121BA2CE589CF53986C2480E22C1ACA25A38BAD;
IL2CPP_EXTERN_C String_t* _stringLiteralA9B19F0C64625940ECCC1C3E0C68BADA4E4EF36C;
IL2CPP_EXTERN_C String_t* _stringLiteralB418987118CE3DE363EE1455B9B64EBFA6E3A74D;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC55E624407304B88ECEF642FE69D516A997BE362;
IL2CPP_EXTERN_C String_t* _stringLiteralCC44AB31978AD5738BAAF9DFDA1FEBDFB8059C0D;
IL2CPP_EXTERN_C String_t* _stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF4EC3331B2888372138EB2110AEB8414565BC508;
IL2CPP_EXTERN_C String_t* _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TiscsvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680_m11F22E4A52F8D1D104CF23B5B0BE8A4A4C3EB573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496_m7F7D7FCFBD30BD8E2C8298D180C936FC8CD9D5F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>
struct List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____items_1)); }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_t5D923CCFE251FC665E3A01C14B2079B9A4830ACC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.Ports.Parity
struct Parity_t64C60BE89F3287232C2C5B4667AD950205BCA77A 
{
public:
	// System.Int32 System.IO.Ports.Parity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Parity_t64C60BE89F3287232C2C5B4667AD950205BCA77A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Ports.SerialPort
struct SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:

public:
};


// System.IO.Ports.StopBits
struct StopBits_t78950C8BCC55E3DDEC4D9980DF11BEAFF04B6595 
{
public:
	// System.Int32 System.IO.Ports.StopBits::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StopBits_t78950C8BCC55E3DDEC4D9980DF11BEAFF04B6595, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_16;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_17;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_18;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_19;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_20;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_21;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_22;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_23;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_24;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_25;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_26;

public:
	inline static int32_t get_offset_of_stream_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_16)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_16() const { return ___stream_16; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_16() { return &___stream_16; }
	inline void set_stream_16(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_16), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_17)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_17() const { return ___encoding_17; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_17), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_18)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_18() const { return ___encoder_18; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_18() { return &___encoder_18; }
	inline void set_encoder_18(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_18), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_19() const { return ___byteBuffer_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_19() { return &___byteBuffer_19; }
	inline void set_byteBuffer_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_19), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_20)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_20() const { return ___charBuffer_20; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_20() { return &___charBuffer_20; }
	inline void set_charBuffer_20(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_20), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_21)); }
	inline int32_t get_charPos_21() const { return ___charPos_21; }
	inline int32_t* get_address_of_charPos_21() { return &___charPos_21; }
	inline void set_charPos_21(int32_t value)
	{
		___charPos_21 = value;
	}

	inline static int32_t get_offset_of_charLen_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_22)); }
	inline int32_t get_charLen_22() const { return ___charLen_22; }
	inline int32_t* get_address_of_charLen_22() { return &___charLen_22; }
	inline void set_charLen_22(int32_t value)
	{
		___charLen_22 = value;
	}

	inline static int32_t get_offset_of_autoFlush_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_23)); }
	inline bool get_autoFlush_23() const { return ___autoFlush_23; }
	inline bool* get_address_of_autoFlush_23() { return &___autoFlush_23; }
	inline void set_autoFlush_23(bool value)
	{
		___autoFlush_23 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_24() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_24)); }
	inline bool get_haveWrittenPreamble_24() const { return ___haveWrittenPreamble_24; }
	inline bool* get_address_of_haveWrittenPreamble_24() { return &___haveWrittenPreamble_24; }
	inline void set_haveWrittenPreamble_24(bool value)
	{
		___haveWrittenPreamble_24 = value;
	}

	inline static int32_t get_offset_of_closable_25() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_25)); }
	inline bool get_closable_25() const { return ___closable_25; }
	inline bool* get_address_of_closable_25() { return &___closable_25; }
	inline void set_closable_25(bool value)
	{
		___closable_25 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_26() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_26)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_26() const { return ____asyncWriteTask_26; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_26() { return &____asyncWriteTask_26; }
	inline void set__asyncWriteTask_26(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_26), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_15;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_27;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_15)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_15() const { return ___Null_15; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_15), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_27() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_27)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_27() const { return ____UTF8NoBOM_27; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_27() { return &____UTF8NoBOM_27; }
	inline void set__UTF8NoBOM_27(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_27), (void*)value);
	}
};


// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// canvasManager/<<Update>g__drivePin|17_0>d
struct U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F 
{
public:
	// System.Int32 canvasManager/<<Update>g__drivePin|17_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder canvasManager/<<Update>g__drivePin|17_0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.Int32 canvasManager/<<Update>g__drivePin|17_0>d::delay
	int32_t ___delay_2;
	// canvasManager canvasManager/<<Update>g__drivePin|17_0>d::<>4__this
	canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * ___U3CU3E4__this_3;
	// System.String canvasManager/<<Update>g__drivePin|17_0>d::s
	String_t* ___s_4;
	// System.Runtime.CompilerServices.TaskAwaiter canvasManager/<<Update>g__drivePin|17_0>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F, ___delay_2)); }
	inline int32_t get_delay_2() const { return ___delay_2; }
	inline int32_t* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(int32_t value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F, ___U3CU3E4__this_3)); }
	inline canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F, ___s_4)); }
	inline String_t* get_s_4() const { return ___s_4; }
	inline String_t** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(String_t* value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// ex2canvasManager/<<Update>g__drivePin|14_0>d
struct U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE 
{
public:
	// System.Int32 ex2canvasManager/<<Update>g__drivePin|14_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder ex2canvasManager/<<Update>g__drivePin|14_0>d::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.Int32 ex2canvasManager/<<Update>g__drivePin|14_0>d::delay
	int32_t ___delay_2;
	// ex2canvasManager ex2canvasManager/<<Update>g__drivePin|14_0>d::<>4__this
	ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * ___U3CU3E4__this_3;
	// System.String ex2canvasManager/<<Update>g__drivePin|14_0>d::s
	String_t* ___s_4;
	// System.Runtime.CompilerServices.TaskAwaiter ex2canvasManager/<<Update>g__drivePin|14_0>d::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE, ___delay_2)); }
	inline int32_t get_delay_2() const { return ___delay_2; }
	inline int32_t* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(int32_t value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE, ___U3CU3E4__this_3)); }
	inline ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_4() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE, ___s_4)); }
	inline String_t* get_s_4() const { return ___s_4; }
	inline String_t** get_address_of_s_4() { return &___s_4; }
	inline void set_s_4(String_t* value)
	{
		___s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// canvasManager
struct canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 canvasManager::currentCanvas
	int32_t ___currentCanvas_4;
	// System.Int32 canvasManager::currentTrials
	int32_t ___currentTrials_5;
	// UnityEngine.Canvas canvasManager::canvasStart
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvasStart_6;
	// UnityEngine.Canvas canvasManager::canvas1
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas1_7;
	// UnityEngine.Canvas canvasManager::canvas2_0
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas2_0_8;
	// UnityEngine.Canvas canvasManager::canvas2_1
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas2_1_9;
	// UnityEngine.Canvas canvasManager::canvas2_2
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas2_2_10;
	// UnityEngine.Canvas canvasManager::canvas3
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas3_11;
	// UnityEngine.UI.InputField canvasManager::a1
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___a1_12;
	// UnityEngine.UI.InputField canvasManager::a2
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___a2_13;
	// UnityEngine.UI.InputField canvasManager::IDInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___IDInputField_14;
	// UnityEngine.GameObject canvasManager::csvHandlerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___csvHandlerObject_15;
	// csvHandler canvasManager::csvHandler
	csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * ___csvHandler_16;
	// UnityEngine.GameObject canvasManager::pinArrayManagerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pinArrayManagerObject_17;
	// pinArrayManager canvasManager::pinArrayManager
	pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * ___pinArrayManager_18;
	// System.IO.StreamWriter canvasManager::sw
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___sw_19;

public:
	inline static int32_t get_offset_of_currentCanvas_4() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___currentCanvas_4)); }
	inline int32_t get_currentCanvas_4() const { return ___currentCanvas_4; }
	inline int32_t* get_address_of_currentCanvas_4() { return &___currentCanvas_4; }
	inline void set_currentCanvas_4(int32_t value)
	{
		___currentCanvas_4 = value;
	}

	inline static int32_t get_offset_of_currentTrials_5() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___currentTrials_5)); }
	inline int32_t get_currentTrials_5() const { return ___currentTrials_5; }
	inline int32_t* get_address_of_currentTrials_5() { return &___currentTrials_5; }
	inline void set_currentTrials_5(int32_t value)
	{
		___currentTrials_5 = value;
	}

	inline static int32_t get_offset_of_canvasStart_6() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___canvasStart_6)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvasStart_6() const { return ___canvasStart_6; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvasStart_6() { return &___canvasStart_6; }
	inline void set_canvasStart_6(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvasStart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasStart_6), (void*)value);
	}

	inline static int32_t get_offset_of_canvas1_7() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___canvas1_7)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas1_7() const { return ___canvas1_7; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas1_7() { return &___canvas1_7; }
	inline void set_canvas1_7(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas1_7), (void*)value);
	}

	inline static int32_t get_offset_of_canvas2_0_8() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___canvas2_0_8)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas2_0_8() const { return ___canvas2_0_8; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas2_0_8() { return &___canvas2_0_8; }
	inline void set_canvas2_0_8(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas2_0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas2_0_8), (void*)value);
	}

	inline static int32_t get_offset_of_canvas2_1_9() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___canvas2_1_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas2_1_9() const { return ___canvas2_1_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas2_1_9() { return &___canvas2_1_9; }
	inline void set_canvas2_1_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas2_1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas2_1_9), (void*)value);
	}

	inline static int32_t get_offset_of_canvas2_2_10() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___canvas2_2_10)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas2_2_10() const { return ___canvas2_2_10; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas2_2_10() { return &___canvas2_2_10; }
	inline void set_canvas2_2_10(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas2_2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas2_2_10), (void*)value);
	}

	inline static int32_t get_offset_of_canvas3_11() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___canvas3_11)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas3_11() const { return ___canvas3_11; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas3_11() { return &___canvas3_11; }
	inline void set_canvas3_11(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas3_11), (void*)value);
	}

	inline static int32_t get_offset_of_a1_12() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___a1_12)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_a1_12() const { return ___a1_12; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_a1_12() { return &___a1_12; }
	inline void set_a1_12(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___a1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a1_12), (void*)value);
	}

	inline static int32_t get_offset_of_a2_13() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___a2_13)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_a2_13() const { return ___a2_13; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_a2_13() { return &___a2_13; }
	inline void set_a2_13(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___a2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a2_13), (void*)value);
	}

	inline static int32_t get_offset_of_IDInputField_14() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___IDInputField_14)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_IDInputField_14() const { return ___IDInputField_14; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_IDInputField_14() { return &___IDInputField_14; }
	inline void set_IDInputField_14(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___IDInputField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IDInputField_14), (void*)value);
	}

	inline static int32_t get_offset_of_csvHandlerObject_15() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___csvHandlerObject_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_csvHandlerObject_15() const { return ___csvHandlerObject_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_csvHandlerObject_15() { return &___csvHandlerObject_15; }
	inline void set_csvHandlerObject_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___csvHandlerObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvHandlerObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_csvHandler_16() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___csvHandler_16)); }
	inline csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * get_csvHandler_16() const { return ___csvHandler_16; }
	inline csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 ** get_address_of_csvHandler_16() { return &___csvHandler_16; }
	inline void set_csvHandler_16(csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * value)
	{
		___csvHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_pinArrayManagerObject_17() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___pinArrayManagerObject_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pinArrayManagerObject_17() const { return ___pinArrayManagerObject_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pinArrayManagerObject_17() { return &___pinArrayManagerObject_17; }
	inline void set_pinArrayManagerObject_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pinArrayManagerObject_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinArrayManagerObject_17), (void*)value);
	}

	inline static int32_t get_offset_of_pinArrayManager_18() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___pinArrayManager_18)); }
	inline pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * get_pinArrayManager_18() const { return ___pinArrayManager_18; }
	inline pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD ** get_address_of_pinArrayManager_18() { return &___pinArrayManager_18; }
	inline void set_pinArrayManager_18(pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * value)
	{
		___pinArrayManager_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinArrayManager_18), (void*)value);
	}

	inline static int32_t get_offset_of_sw_19() { return static_cast<int32_t>(offsetof(canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F, ___sw_19)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_sw_19() const { return ___sw_19; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_sw_19() { return &___sw_19; }
	inline void set_sw_19(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___sw_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sw_19), (void*)value);
	}
};


// csvHandler
struct csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextAsset csvHandler::csvFile
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___csvFile_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> csvHandler::csvData
	List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___csvData_5;

public:
	inline static int32_t get_offset_of_csvFile_4() { return static_cast<int32_t>(offsetof(csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680, ___csvFile_4)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_csvFile_4() const { return ___csvFile_4; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_csvFile_4() { return &___csvFile_4; }
	inline void set_csvFile_4(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___csvFile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvFile_4), (void*)value);
	}

	inline static int32_t get_offset_of_csvData_5() { return static_cast<int32_t>(offsetof(csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680, ___csvData_5)); }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * get_csvData_5() const { return ___csvData_5; }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 ** get_address_of_csvData_5() { return &___csvData_5; }
	inline void set_csvData_5(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * value)
	{
		___csvData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvData_5), (void*)value);
	}
};


// ex2canvasManager
struct ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ex2canvasManager::currentCanvas
	int32_t ___currentCanvas_4;
	// System.Int32 ex2canvasManager::currentTrials
	int32_t ___currentTrials_5;
	// UnityEngine.Canvas ex2canvasManager::canvasStart
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvasStart_6;
	// UnityEngine.Canvas ex2canvasManager::canvas1
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas1_7;
	// UnityEngine.Canvas ex2canvasManager::canvas2
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas2_8;
	// UnityEngine.Canvas ex2canvasManager::canvas3
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas3_9;
	// UnityEngine.UI.InputField ex2canvasManager::a1
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___a1_10;
	// UnityEngine.UI.InputField ex2canvasManager::IDInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___IDInputField_11;
	// UnityEngine.GameObject ex2canvasManager::csvHandlerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___csvHandlerObject_12;
	// ex2csvHandler ex2canvasManager::csvHandler
	ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * ___csvHandler_13;
	// UnityEngine.GameObject ex2canvasManager::pinArrayManagerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pinArrayManagerObject_14;
	// pinArrayManager ex2canvasManager::pinArrayManager
	pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * ___pinArrayManager_15;
	// System.IO.StreamWriter ex2canvasManager::sw
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___sw_16;

public:
	inline static int32_t get_offset_of_currentCanvas_4() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___currentCanvas_4)); }
	inline int32_t get_currentCanvas_4() const { return ___currentCanvas_4; }
	inline int32_t* get_address_of_currentCanvas_4() { return &___currentCanvas_4; }
	inline void set_currentCanvas_4(int32_t value)
	{
		___currentCanvas_4 = value;
	}

	inline static int32_t get_offset_of_currentTrials_5() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___currentTrials_5)); }
	inline int32_t get_currentTrials_5() const { return ___currentTrials_5; }
	inline int32_t* get_address_of_currentTrials_5() { return &___currentTrials_5; }
	inline void set_currentTrials_5(int32_t value)
	{
		___currentTrials_5 = value;
	}

	inline static int32_t get_offset_of_canvasStart_6() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___canvasStart_6)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvasStart_6() const { return ___canvasStart_6; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvasStart_6() { return &___canvasStart_6; }
	inline void set_canvasStart_6(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvasStart_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasStart_6), (void*)value);
	}

	inline static int32_t get_offset_of_canvas1_7() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___canvas1_7)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas1_7() const { return ___canvas1_7; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas1_7() { return &___canvas1_7; }
	inline void set_canvas1_7(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas1_7), (void*)value);
	}

	inline static int32_t get_offset_of_canvas2_8() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___canvas2_8)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas2_8() const { return ___canvas2_8; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas2_8() { return &___canvas2_8; }
	inline void set_canvas2_8(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas2_8), (void*)value);
	}

	inline static int32_t get_offset_of_canvas3_9() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___canvas3_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas3_9() const { return ___canvas3_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas3_9() { return &___canvas3_9; }
	inline void set_canvas3_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas3_9), (void*)value);
	}

	inline static int32_t get_offset_of_a1_10() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___a1_10)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_a1_10() const { return ___a1_10; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_a1_10() { return &___a1_10; }
	inline void set_a1_10(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___a1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___a1_10), (void*)value);
	}

	inline static int32_t get_offset_of_IDInputField_11() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___IDInputField_11)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_IDInputField_11() const { return ___IDInputField_11; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_IDInputField_11() { return &___IDInputField_11; }
	inline void set_IDInputField_11(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___IDInputField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IDInputField_11), (void*)value);
	}

	inline static int32_t get_offset_of_csvHandlerObject_12() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___csvHandlerObject_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_csvHandlerObject_12() const { return ___csvHandlerObject_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_csvHandlerObject_12() { return &___csvHandlerObject_12; }
	inline void set_csvHandlerObject_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___csvHandlerObject_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvHandlerObject_12), (void*)value);
	}

	inline static int32_t get_offset_of_csvHandler_13() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___csvHandler_13)); }
	inline ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * get_csvHandler_13() const { return ___csvHandler_13; }
	inline ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 ** get_address_of_csvHandler_13() { return &___csvHandler_13; }
	inline void set_csvHandler_13(ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * value)
	{
		___csvHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_pinArrayManagerObject_14() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___pinArrayManagerObject_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pinArrayManagerObject_14() const { return ___pinArrayManagerObject_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pinArrayManagerObject_14() { return &___pinArrayManagerObject_14; }
	inline void set_pinArrayManagerObject_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pinArrayManagerObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinArrayManagerObject_14), (void*)value);
	}

	inline static int32_t get_offset_of_pinArrayManager_15() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___pinArrayManager_15)); }
	inline pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * get_pinArrayManager_15() const { return ___pinArrayManager_15; }
	inline pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD ** get_address_of_pinArrayManager_15() { return &___pinArrayManager_15; }
	inline void set_pinArrayManager_15(pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * value)
	{
		___pinArrayManager_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinArrayManager_15), (void*)value);
	}

	inline static int32_t get_offset_of_sw_16() { return static_cast<int32_t>(offsetof(ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705, ___sw_16)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_sw_16() const { return ___sw_16; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_sw_16() { return &___sw_16; }
	inline void set_sw_16(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___sw_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sw_16), (void*)value);
	}
};


// ex2csvHandler
struct ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextAsset ex2csvHandler::csvFile
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___csvFile_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>> ex2csvHandler::csvData
	List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___csvData_5;

public:
	inline static int32_t get_offset_of_csvFile_4() { return static_cast<int32_t>(offsetof(ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496, ___csvFile_4)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_csvFile_4() const { return ___csvFile_4; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_csvFile_4() { return &___csvFile_4; }
	inline void set_csvFile_4(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___csvFile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvFile_4), (void*)value);
	}

	inline static int32_t get_offset_of_csvData_5() { return static_cast<int32_t>(offsetof(ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496, ___csvData_5)); }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * get_csvData_5() const { return ___csvData_5; }
	inline List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 ** get_address_of_csvData_5() { return &___csvData_5; }
	inline void set_csvData_5(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * value)
	{
		___csvData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___csvData_5), (void*)value);
	}
};


// pinArrayManager
struct pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String pinArrayManager::portName
	String_t* ___portName_4;
	// System.Int32 pinArrayManager::baudRate
	int32_t ___baudRate_5;
	// System.IO.Ports.SerialPort pinArrayManager::serialPinArray
	SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serialPinArray_6;
	// System.String pinArrayManager::message
	String_t* ___message_7;

public:
	inline static int32_t get_offset_of_portName_4() { return static_cast<int32_t>(offsetof(pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD, ___portName_4)); }
	inline String_t* get_portName_4() const { return ___portName_4; }
	inline String_t** get_address_of_portName_4() { return &___portName_4; }
	inline void set_portName_4(String_t* value)
	{
		___portName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_4), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_5() { return static_cast<int32_t>(offsetof(pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD, ___baudRate_5)); }
	inline int32_t get_baudRate_5() const { return ___baudRate_5; }
	inline int32_t* get_address_of_baudRate_5() { return &___baudRate_5; }
	inline void set_baudRate_5(int32_t value)
	{
		___baudRate_5 = value;
	}

	inline static int32_t get_offset_of_serialPinArray_6() { return static_cast<int32_t>(offsetof(pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD, ___serialPinArray_6)); }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * get_serialPinArray_6() const { return ___serialPinArray_6; }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 ** get_address_of_serialPinArray_6() { return &___serialPinArray_6; }
	inline void set_serialPinArray_6(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * value)
	{
		___serialPinArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialPinArray_6), (void*)value);
	}

	inline static int32_t get_offset_of_message_7() { return static_cast<int32_t>(offsetof(pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD, ___message_7)); }
	inline String_t* get_message_7() const { return ___message_7; }
	inline String_t** get_address_of_message_7() { return &___message_7; }
	inline void set_message_7(String_t* value)
	{
		___message_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_7), (void*)value);
	}
};


// serialManager
struct serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text serialManager::fx
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___fx_4;
	// UnityEngine.UI.Text serialManager::fy
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___fy_5;
	// UnityEngine.UI.Text serialManager::fz
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___fz_6;
	// UnityEngine.UI.Scrollbar serialManager::forceBar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___forceBar_7;
	// UnityEngine.UI.Button serialManager::forceIndicator
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___forceIndicator_8;
	// System.Int32 serialManager::flag_rev
	int32_t ___flag_rev_9;
	// System.String serialManager::portName
	String_t* ___portName_10;
	// System.Int32 serialManager::baudRate
	int32_t ___baudRate_11;
	// System.IO.Ports.SerialPort serialManager::serial
	SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * ___serial_12;
	// System.Threading.Thread serialManager::_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ____thread_13;
	// System.Boolean serialManager::isRunning
	bool ___isRunning_14;
	// System.String serialManager::message
	String_t* ___message_15;
	// System.Byte[] serialManager::sendMessage
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___sendMessage_16;
	// System.Double[] serialManager::sensi
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___sensi_17;
	// System.Int32[] serialManager::inivals
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___inivals_18;
	// System.Int32[] serialManager::measuredvals
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___measuredvals_19;
	// System.Double[] serialManager::data
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___data_20;
	// System.String[] serialManager::str
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___str_21;

public:
	inline static int32_t get_offset_of_fx_4() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___fx_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_fx_4() const { return ___fx_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_fx_4() { return &___fx_4; }
	inline void set_fx_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___fx_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fx_4), (void*)value);
	}

	inline static int32_t get_offset_of_fy_5() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___fy_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_fy_5() const { return ___fy_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_fy_5() { return &___fy_5; }
	inline void set_fy_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___fy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fy_5), (void*)value);
	}

	inline static int32_t get_offset_of_fz_6() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___fz_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_fz_6() const { return ___fz_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_fz_6() { return &___fz_6; }
	inline void set_fz_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___fz_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fz_6), (void*)value);
	}

	inline static int32_t get_offset_of_forceBar_7() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___forceBar_7)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_forceBar_7() const { return ___forceBar_7; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_forceBar_7() { return &___forceBar_7; }
	inline void set_forceBar_7(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___forceBar_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forceBar_7), (void*)value);
	}

	inline static int32_t get_offset_of_forceIndicator_8() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___forceIndicator_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_forceIndicator_8() const { return ___forceIndicator_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_forceIndicator_8() { return &___forceIndicator_8; }
	inline void set_forceIndicator_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___forceIndicator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forceIndicator_8), (void*)value);
	}

	inline static int32_t get_offset_of_flag_rev_9() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___flag_rev_9)); }
	inline int32_t get_flag_rev_9() const { return ___flag_rev_9; }
	inline int32_t* get_address_of_flag_rev_9() { return &___flag_rev_9; }
	inline void set_flag_rev_9(int32_t value)
	{
		___flag_rev_9 = value;
	}

	inline static int32_t get_offset_of_portName_10() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___portName_10)); }
	inline String_t* get_portName_10() const { return ___portName_10; }
	inline String_t** get_address_of_portName_10() { return &___portName_10; }
	inline void set_portName_10(String_t* value)
	{
		___portName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portName_10), (void*)value);
	}

	inline static int32_t get_offset_of_baudRate_11() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___baudRate_11)); }
	inline int32_t get_baudRate_11() const { return ___baudRate_11; }
	inline int32_t* get_address_of_baudRate_11() { return &___baudRate_11; }
	inline void set_baudRate_11(int32_t value)
	{
		___baudRate_11 = value;
	}

	inline static int32_t get_offset_of_serial_12() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___serial_12)); }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * get_serial_12() const { return ___serial_12; }
	inline SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 ** get_address_of_serial_12() { return &___serial_12; }
	inline void set_serial_12(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * value)
	{
		___serial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serial_12), (void*)value);
	}

	inline static int32_t get_offset_of__thread_13() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ____thread_13)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get__thread_13() const { return ____thread_13; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of__thread_13() { return &____thread_13; }
	inline void set__thread_13(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		____thread_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thread_13), (void*)value);
	}

	inline static int32_t get_offset_of_isRunning_14() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___isRunning_14)); }
	inline bool get_isRunning_14() const { return ___isRunning_14; }
	inline bool* get_address_of_isRunning_14() { return &___isRunning_14; }
	inline void set_isRunning_14(bool value)
	{
		___isRunning_14 = value;
	}

	inline static int32_t get_offset_of_message_15() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___message_15)); }
	inline String_t* get_message_15() const { return ___message_15; }
	inline String_t** get_address_of_message_15() { return &___message_15; }
	inline void set_message_15(String_t* value)
	{
		___message_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_15), (void*)value);
	}

	inline static int32_t get_offset_of_sendMessage_16() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___sendMessage_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_sendMessage_16() const { return ___sendMessage_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_sendMessage_16() { return &___sendMessage_16; }
	inline void set_sendMessage_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___sendMessage_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sendMessage_16), (void*)value);
	}

	inline static int32_t get_offset_of_sensi_17() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___sensi_17)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_sensi_17() const { return ___sensi_17; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_sensi_17() { return &___sensi_17; }
	inline void set_sensi_17(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___sensi_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sensi_17), (void*)value);
	}

	inline static int32_t get_offset_of_inivals_18() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___inivals_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_inivals_18() const { return ___inivals_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_inivals_18() { return &___inivals_18; }
	inline void set_inivals_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___inivals_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inivals_18), (void*)value);
	}

	inline static int32_t get_offset_of_measuredvals_19() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___measuredvals_19)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_measuredvals_19() const { return ___measuredvals_19; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_measuredvals_19() { return &___measuredvals_19; }
	inline void set_measuredvals_19(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___measuredvals_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___measuredvals_19), (void*)value);
	}

	inline static int32_t get_offset_of_data_20() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___data_20)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_data_20() const { return ___data_20; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_data_20() { return &___data_20; }
	inline void set_data_20(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___data_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_20), (void*)value);
	}

	inline static int32_t get_offset_of_str_21() { return static_cast<int32_t>(offsetof(serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF, ___str_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_str_21() const { return ___str_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_str_21() { return &___str_21; }
	inline void set_str_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___str_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___str_21), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<canvasManager/<<Update>g__drivePin|17_0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ex2canvasManager/<<Update>g__drivePin|14_0>d>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,canvasManager/<<Update>g__drivePin|17_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ex2canvasManager/<<Update>g__drivePin|14_0>d>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * ___stateMachine1, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<csvHandler>()
inline csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * GameObject_GetComponent_TiscsvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680_m11F22E4A52F8D1D104CF23B5B0BE8A4A4C3EB573 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<pinArrayManager>()
inline pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, String_t* ___path0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Item(System.Int32)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, String_t*, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void canvasManager::<Update>g__drivePin|17_0(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasManager_U3CUpdateU3Eg__drivePinU7C17_0_m2277AD622F453DDB735A2B9625B5D751EA0CAA0F (canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * __this, String_t* ___s0, int32_t ___delay1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<canvasManager/<<Update>g__drivePin|17_0>d>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218 (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::Add(!0)
inline void List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2 (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void csvHandler::addColumn(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler_addColumn_mBAB2492A5887D3F12A3621993A9D6F674CE7130A (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___trialList0, const RuntimeMethod* method);
// System.Void csvHandler::ShuffleList(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler_ShuffleList_mC38216A63F83FEF7B31FBE61CE50B5D680E7270E (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___list0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::get_Count()
inline int32_t List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, int32_t ___index0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, int32_t, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>::.ctor()
inline void List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618 (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<ex2csvHandler>()
inline ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * GameObject_GetComponent_Tisex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496_m7F7D7FCFBD30BD8E2C8298D180C936FC8CD9D5F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ex2canvasManager::<Update>g__drivePin|14_0(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2canvasManager_U3CUpdateU3Eg__drivePinU7C14_0_m276DB364AEB341B37AA2C15AD99DE46469C4D0CA (ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * __this, String_t* ___s0, int32_t ___delay1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ex2canvasManager/<<Update>g__drivePin|14_0>d>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA_gshared)(__this, ___stateMachine0, method);
}
// System.Void ex2csvHandler::addColumn(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler_addColumn_m7986656A6F5D421584C79F2DE0989D946E6FD0DC (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___trialList0, const RuntimeMethod* method);
// System.Void ex2csvHandler::ShuffleList(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler_ShuffleList_mCC422B2AA556C6D17DC93D4B7127821A08AC2AD2 (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___list0, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::.ctor(System.String,System.Int32,System.IO.Ports.Parity,System.Int32,System.IO.Ports.StopBits)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort__ctor_m15C11FB9BB0F68CABB982CD4252D78FBDC289EBD (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, String_t* ___portName0, int32_t ___baudRate1, int32_t ___parity2, int32_t ___dataBits3, int32_t ___stopBits4, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Scrollbar>()
inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void serialManager::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Open_m4E70F0621D6B1007A62EE63740234FA362565887 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method);
// System.Void serialManager::GetInitVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_GetInitVal_mA89C5E778597D37402BCA5E0641A2A473891834F (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method);
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E (const RuntimeMethod* method);
// System.Void serialManager::refreshBarVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_refreshBarVal_m1E6B54AAB0AFFA47C363C9B901042119AF736420 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, float ___value0, const RuntimeMethod* method);
// System.Void serialManager::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Close_mDC230FD6A97F3131CDA4195718A04F2BA4F80633 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method);
// System.Void serialManager::GetSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_GetSensitivity_m19C6FF3DC3CDF90E6A7FC79A3B4B8FB319236555 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method);
// System.Void serialManager::GetMeasuredVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_GetMeasuredVal_mAF1988AEA1A03282F8860917D8BFAD040942B303 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::DiscardInBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_DiscardInBuffer_m331F424042FF88A80630CEF6F235BD74C75BBB99 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// System.String System.IO.Ports.SerialPort::ReadLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E (String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.Boolean System.IO.Ports.SerialPort::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Thread::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Join()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.IO.Ports.SerialPort::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Close_m288C294F0F4AF5508E932492937DFCD348AB9C34 (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * __this, const RuntimeMethod* method);
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593 (Component_t015539CFEAEEBFD7619041FE006475373E0D71DF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E (int32_t ___millisecondsDelay0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,canvasManager/<<Update>g__drivePin|17_0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void canvasManager/<<Update>g__drivePin|17_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_MoveNext_m9FC0FDD834EF3120CE5DE1B21D8A27C4E47636F3 (U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void canvasManager/<<Update>g__drivePin|17_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_SetStateMachine_mF20E3CA308030DF8D0A8C86F58BFEC5057E56802 (U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ex2canvasManager/<<Update>g__drivePin|14_0>d>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ex2canvasManager/<<Update>g__drivePin|14_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_MoveNext_m28FD3535AD7DBC4C4C5A35FCC7B3346933B5A775 (U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * __this, const RuntimeMethod* method);
// System.Void ex2canvasManager/<<Update>g__drivePin|14_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_SetStateMachine_mD46894470D3D057651E783A4735A7AC0037B4DBF (U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void canvasManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasManager_Start_mA57F41BCE7EEAC5B16F8757E9EB46A28D98A4EE5 (canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TiscsvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680_m11F22E4A52F8D1D104CF23B5B0BE8A4A4C3EB573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AA2D901F5B20D59FCF9CC9AE7C7CF00DB83D490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1397641DBAA59DF76A7817204222D80B2B18DDA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E541017DD5DBD750FC9FF768C52C5C1C89FB541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DBFA78756A89FB292803470DE98175040F814E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D72F3B20FC8764604129E0F8CEE6B9775745A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A357F7EB0458F106B7AF258E8A13873F1713AAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86F9CDF3972D89E2F93818CDEA436D60B0F98040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BB4EBEFDB80699436D4A397ED2789A8C106E353);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB418987118CE3DE363EE1455B9B64EBFA6E3A74D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// csvHandlerObject = GameObject.Find("CSVHandler");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral63D72F3B20FC8764604129E0F8CEE6B9775745A2, /*hidden argument*/NULL);
		__this->set_csvHandlerObject_15(L_0);
		// csvHandler = csvHandlerObject.GetComponent<csvHandler>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_csvHandlerObject_15();
		NullCheck(L_1);
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_2;
		L_2 = GameObject_GetComponent_TiscsvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680_m11F22E4A52F8D1D104CF23B5B0BE8A4A4C3EB573(L_1, /*hidden argument*/GameObject_GetComponent_TiscsvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680_m11F22E4A52F8D1D104CF23B5B0BE8A4A4C3EB573_RuntimeMethod_var);
		__this->set_csvHandler_16(L_2);
		// pinArrayManagerObject = GameObject.Find("serialManager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3DBFA78756A89FB292803470DE98175040F814E9, /*hidden argument*/NULL);
		__this->set_pinArrayManagerObject_17(L_3);
		// pinArrayManager = pinArrayManagerObject.GetComponent<pinArrayManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pinArrayManagerObject_17();
		NullCheck(L_4);
		pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * L_5;
		L_5 = GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550(L_4, /*hidden argument*/GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550_RuntimeMethod_var);
		__this->set_pinArrayManager_18(L_5);
		// canvasStart = GameObject.Find("CanvasStart").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB418987118CE3DE363EE1455B9B64EBFA6E3A74D, /*hidden argument*/NULL);
		NullCheck(L_6);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7;
		L_7 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_6, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvasStart_6(L_7);
		// canvas1 = GameObject.Find("Canvas1").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0AA2D901F5B20D59FCF9CC9AE7C7CF00DB83D490, /*hidden argument*/NULL);
		NullCheck(L_8);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_9;
		L_9 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_8, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas1_7(L_9);
		// canvas2_0 = GameObject.Find("Canvas2_0").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7A357F7EB0458F106B7AF258E8A13873F1713AAE, /*hidden argument*/NULL);
		NullCheck(L_10);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_11;
		L_11 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_10, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas2_0_8(L_11);
		// canvas2_1 = GameObject.Find("Canvas2_1").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9BB4EBEFDB80699436D4A397ED2789A8C106E353, /*hidden argument*/NULL);
		NullCheck(L_12);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_13;
		L_13 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_12, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas2_1_9(L_13);
		// canvas2_2 = GameObject.Find("Canvas2_2").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1E541017DD5DBD750FC9FF768C52C5C1C89FB541, /*hidden argument*/NULL);
		NullCheck(L_14);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_15;
		L_15 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_14, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas2_2_10(L_15);
		// canvas3 = GameObject.Find("Canvas3").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1397641DBAA59DF76A7817204222D80B2B18DDA0, /*hidden argument*/NULL);
		NullCheck(L_16);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_17;
		L_17 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_16, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas3_11(L_17);
		// a1 = GameObject.Find("a1").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E, /*hidden argument*/NULL);
		NullCheck(L_18);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_19;
		L_19 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_18, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_a1_12(L_19);
		// a2 = GameObject.Find("a2").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralD002B3E6BD56B2E27D767D0DFC8BABE5F4331C9E, /*hidden argument*/NULL);
		NullCheck(L_20);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_21;
		L_21 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_20, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_a2_13(L_21);
		// IDInputField = GameObject.Find("IDInputField").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral86F9CDF3972D89E2F93818CDEA436D60B0F98040, /*hidden argument*/NULL);
		NullCheck(L_22);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_23;
		L_23 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_22, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_IDInputField_14(L_23);
		// canvasStart.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_24 = __this->get_canvasStart_6();
		NullCheck(L_24);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_24, (bool)1, /*hidden argument*/NULL);
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_25 = __this->get_canvas1_7();
		NullCheck(L_25);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_25, (bool)0, /*hidden argument*/NULL);
		// canvas2_0.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_26 = __this->get_canvas2_0_8();
		NullCheck(L_26);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_26, (bool)0, /*hidden argument*/NULL);
		// canvas2_1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_27 = __this->get_canvas2_1_9();
		NullCheck(L_27);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_27, (bool)0, /*hidden argument*/NULL);
		// canvas2_2.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_28 = __this->get_canvas2_2_10();
		NullCheck(L_28);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_28, (bool)0, /*hidden argument*/NULL);
		// canvas3.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_29 = __this->get_canvas3_11();
		NullCheck(L_29);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_29, (bool)0, /*hidden argument*/NULL);
		// pinArrayManager.serialPinArray.Write("a");//M5Stack������1�̃��[�h�ɂ���
		pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * L_30 = __this->get_pinArrayManager_18();
		NullCheck(L_30);
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_31 = L_30->get_serialPinArray_6();
		NullCheck(L_31);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_31, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void canvasManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasManager_Update_mFAACFE543D5F4E39719B696296AE391C646AFBB6 (canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD8951DA84B68D5B2FE0879AA1C22DF22738BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E62A28E6D19717C05020E9E9670CB0BA9AD7F9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5524BD9C473124B5873B5CA0214876053B0AB165);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E3917459AA92D4A01982EE3E9D27BFA57AD8F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872CAD4CA2C6627CB6131C62855A78319B8645C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4EC3331B2888372138EB2110AEB8414565BC508);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)271), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_03ad;
		}
	}
	{
		// if (currentCanvas == 0 &&
		//     IDInputField.text != "")
		int32_t L_1 = __this->get_currentCanvas_4();
		if (L_1)
		{
			goto IL_0085;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_IDInputField_14();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0085;
		}
	}
	{
		// sw = new StreamWriter(@"Assets\" + IDInputField.text + "_Result_ex1.csv") { AutoFlush = true };
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_5 = __this->get_IDInputField_14();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral872CAD4CA2C6627CB6131C62855A78319B8645C8, L_6, _stringLiteral5524BD9C473124B5873B5CA0214876053B0AB165, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_8 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_8, L_7, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_9 = L_8;
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(21 /* System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean) */, L_9, (bool)1);
		__this->set_sw_19(L_9);
		// canvasStart.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_10 = __this->get_canvasStart_6();
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
		// canvas1.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_11 = __this->get_canvas1_7();
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)1, /*hidden argument*/NULL);
		// currentCanvas += 1;
		int32_t L_12 = __this->get_currentCanvas_4();
		__this->set_currentCanvas_4(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		// }
		goto IL_035c;
	}

IL_0085:
	{
		// else if (currentCanvas == 1)
		int32_t L_13 = __this->get_currentCanvas_4();
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0172;
		}
	}
	{
		// Debug.Log(int.Parse(csvHandler.csvData[currentTrials][1]));
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_14 = __this->get_csvHandler_16();
		NullCheck(L_14);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_15 = L_14->get_csvData_5();
		int32_t L_16 = __this->get_currentTrials_5();
		NullCheck(L_15);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17;
		L_17 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_17, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_19;
		L_19 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
		// if (0 <= int.Parse(csvHandler.csvData[currentTrials][1]) &&
		//          int.Parse(csvHandler.csvData[currentTrials][1]) <= 3)
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_22 = __this->get_csvHandler_16();
		NullCheck(L_22);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_23 = L_22->get_csvData_5();
		int32_t L_24 = __this->get_currentTrials_5();
		NullCheck(L_23);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_25;
		L_25 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_25, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_27;
		L_27 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_26, /*hidden argument*/NULL);
		if ((((int32_t)0) > ((int32_t)L_27)))
		{
			goto IL_013b;
		}
	}
	{
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_28 = __this->get_csvHandler_16();
		NullCheck(L_28);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_29 = L_28->get_csvData_5();
		int32_t L_30 = __this->get_currentTrials_5();
		NullCheck(L_29);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31;
		L_31 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_31, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_33;
		L_33 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) > ((int32_t)3)))
		{
			goto IL_013b;
		}
	}
	{
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_34 = __this->get_canvas1_7();
		NullCheck(L_34);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_34, (bool)0, /*hidden argument*/NULL);
		// canvas2_0.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_35 = __this->get_canvas2_0_8();
		NullCheck(L_35);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_35, (bool)1, /*hidden argument*/NULL);
		// canvas2_1.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_36 = __this->get_canvas2_1_9();
		NullCheck(L_36);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_36, (bool)1, /*hidden argument*/NULL);
		// currentCanvas += 1;
		int32_t L_37 = __this->get_currentCanvas_4();
		__this->set_currentCanvas_4(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
		// }
		goto IL_035c;
	}

IL_013b:
	{
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_38 = __this->get_canvas1_7();
		NullCheck(L_38);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_38, (bool)0, /*hidden argument*/NULL);
		// canvas2_0.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_39 = __this->get_canvas2_0_8();
		NullCheck(L_39);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_39, (bool)1, /*hidden argument*/NULL);
		// canvas2_2.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_40 = __this->get_canvas2_2_10();
		NullCheck(L_40);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_40, (bool)1, /*hidden argument*/NULL);
		// currentCanvas += 1;
		int32_t L_41 = __this->get_currentCanvas_4();
		__this->set_currentCanvas_4(((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1)));
		// }
		goto IL_035c;
	}

IL_0172:
	{
		// else if (currentCanvas == 2 &&
		//          a1.text != "" &&
		//          a2.text != "")
		int32_t L_42 = __this->get_currentCanvas_4();
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_035c;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_43 = __this->get_a1_12();
		NullCheck(L_43);
		String_t* L_44;
		L_44 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_43, /*hidden argument*/NULL);
		bool L_45;
		L_45 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_44, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_035c;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_46 = __this->get_a2_13();
		NullCheck(L_46);
		String_t* L_47;
		L_47 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_46, /*hidden argument*/NULL);
		bool L_48;
		L_48 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_47, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_035c;
		}
	}
	{
		// csvHandler.csvData[currentTrials][3] = a1.text;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_49 = __this->get_csvHandler_16();
		NullCheck(L_49);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_50 = L_49->get_csvData_5();
		int32_t L_51 = __this->get_currentTrials_5();
		NullCheck(L_50);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_52;
		L_52 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_50, L_51, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_53 = __this->get_a1_12();
		NullCheck(L_53);
		String_t* L_54;
		L_54 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09(L_52, 3, L_54, /*hidden argument*/List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09_RuntimeMethod_var);
		// csvHandler.csvData[currentTrials][4] = a2.text;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_55 = __this->get_csvHandler_16();
		NullCheck(L_55);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_56 = L_55->get_csvData_5();
		int32_t L_57 = __this->get_currentTrials_5();
		NullCheck(L_56);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_58;
		L_58 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_56, L_57, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_59 = __this->get_a2_13();
		NullCheck(L_59);
		String_t* L_60;
		L_60 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09(L_58, 4, L_60, /*hidden argument*/List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09_RuntimeMethod_var);
		// Debug.Log(csvHandler.csvData[currentTrials][0]
		//     + " " + csvHandler.csvData[currentTrials][1]
		//     + " " + csvHandler.csvData[currentTrials][2]
		//     + " " + csvHandler.csvData[currentTrials][3]
		//     + " " + csvHandler.csvData[currentTrials][4]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_61;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_63 = __this->get_csvHandler_16();
		NullCheck(L_63);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_64 = L_63->get_csvData_5();
		int32_t L_65 = __this->get_currentTrials_5();
		NullCheck(L_64);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_66;
		L_66 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_66, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_67);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_67);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_62;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = L_68;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_70 = __this->get_csvHandler_16();
		NullCheck(L_70);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_71 = L_70->get_csvData_5();
		int32_t L_72 = __this->get_currentTrials_5();
		NullCheck(L_71);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_73;
		L_73 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_71, L_72, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_73);
		String_t* L_74;
		L_74 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_73, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_74);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_74);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_69;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_75;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_77 = __this->get_csvHandler_16();
		NullCheck(L_77);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_78 = L_77->get_csvData_5();
		int32_t L_79 = __this->get_currentTrials_5();
		NullCheck(L_78);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_80;
		L_80 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_78, L_79, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_80);
		String_t* L_81;
		L_81 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_80, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_81);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_81);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = L_76;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = L_82;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_84 = __this->get_csvHandler_16();
		NullCheck(L_84);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_85 = L_84->get_csvData_5();
		int32_t L_86 = __this->get_currentTrials_5();
		NullCheck(L_85);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_87;
		L_87 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_85, L_86, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_87);
		String_t* L_88;
		L_88 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_87, 3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_88);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_88);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = L_83;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_89;
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_91 = __this->get_csvHandler_16();
		NullCheck(L_91);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_92 = L_91->get_csvData_5();
		int32_t L_93 = __this->get_currentTrials_5();
		NullCheck(L_92);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_94;
		L_94 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_92, L_93, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_94);
		String_t* L_95;
		L_95 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_94, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, L_95);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_95);
		String_t* L_96;
		L_96 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_96, /*hidden argument*/NULL);
		// a1.text = "";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_97 = __this->get_a1_12();
		NullCheck(L_97);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_97, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// a2.text = "";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_98 = __this->get_a2_13();
		NullCheck(L_98);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_98, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// sw.WriteLine(string.Join(",", csvHandler.csvData[currentTrials]));
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_99 = __this->get_sw_19();
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_100 = __this->get_csvHandler_16();
		NullCheck(L_100);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_101 = L_100->get_csvData_5();
		int32_t L_102 = __this->get_currentTrials_5();
		NullCheck(L_101);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_103;
		L_103 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_101, L_102, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		String_t* L_104;
		L_104 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_103, /*hidden argument*/NULL);
		NullCheck(L_99);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_99, L_104);
		// canvas2_0.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_105 = __this->get_canvas2_0_8();
		NullCheck(L_105);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_105, (bool)0, /*hidden argument*/NULL);
		// canvas2_1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_106 = __this->get_canvas2_1_9();
		NullCheck(L_106);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_106, (bool)0, /*hidden argument*/NULL);
		// canvas2_2.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_107 = __this->get_canvas2_2_10();
		NullCheck(L_107);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_107, (bool)0, /*hidden argument*/NULL);
		// canvas1.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_108 = __this->get_canvas1_7();
		NullCheck(L_108);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_108, (bool)1, /*hidden argument*/NULL);
		// currentCanvas = 1;
		__this->set_currentCanvas_4(1);
		// currentTrials += 1;
		int32_t L_109 = __this->get_currentTrials_5();
		__this->set_currentTrials_5(((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1)));
	}

IL_035c:
	{
		// if (currentTrials >= 100)
		int32_t L_110 = __this->get_currentTrials_5();
		if ((((int32_t)L_110) < ((int32_t)((int32_t)100))))
		{
			goto IL_03ad;
		}
	}
	{
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_111 = __this->get_canvas1_7();
		NullCheck(L_111);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_111, (bool)0, /*hidden argument*/NULL);
		// canvas2_0.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_112 = __this->get_canvas2_0_8();
		NullCheck(L_112);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_112, (bool)0, /*hidden argument*/NULL);
		// canvas2_1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_113 = __this->get_canvas2_1_9();
		NullCheck(L_113);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_113, (bool)0, /*hidden argument*/NULL);
		// canvas2_2.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_114 = __this->get_canvas2_2_10();
		NullCheck(L_114);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_114, (bool)0, /*hidden argument*/NULL);
		// canvas3.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_115 = __this->get_canvas3_11();
		NullCheck(L_115);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_115, (bool)1, /*hidden argument*/NULL);
		// sw.Close();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_116 = __this->get_sw_19();
		NullCheck(L_116);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_116);
	}

IL_03ad:
	{
		// if (currentCanvas == 2)
		int32_t L_117 = __this->get_currentCanvas_4();
		if ((!(((uint32_t)L_117) == ((uint32_t)2))))
		{
			goto IL_04ff;
		}
	}
	{
		// if (0 <= int.Parse(csvHandler.csvData[currentTrials][1]) &&
		//          int.Parse(csvHandler.csvData[currentTrials][1]) <= 3)
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_118 = __this->get_csvHandler_16();
		NullCheck(L_118);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_119 = L_118->get_csvData_5();
		int32_t L_120 = __this->get_currentTrials_5();
		NullCheck(L_119);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_121;
		L_121 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_119, L_120, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_121);
		String_t* L_122;
		L_122 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_121, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_123;
		L_123 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_122, /*hidden argument*/NULL);
		if ((((int32_t)0) > ((int32_t)L_123)))
		{
			goto IL_043b;
		}
	}
	{
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_124 = __this->get_csvHandler_16();
		NullCheck(L_124);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_125 = L_124->get_csvData_5();
		int32_t L_126 = __this->get_currentTrials_5();
		NullCheck(L_125);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_127;
		L_127 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_125, L_126, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_127);
		String_t* L_128;
		L_128 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_127, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_129;
		L_129 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_128, /*hidden argument*/NULL);
		if ((((int32_t)L_129) > ((int32_t)3)))
		{
			goto IL_043b;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_130;
		L_130 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (!L_130)
		{
			goto IL_041d;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_131 = __this->get_a1_12();
		NullCheck(L_131);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_131, _stringLiteral67E3917459AA92D4A01982EE3E9D27BFA57AD8F4, /*hidden argument*/NULL);
	}

IL_041d:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_132;
		L_132 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (!L_132)
		{
			goto IL_0473;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_133 = __this->get_a1_12();
		NullCheck(L_133);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_133, _stringLiteral3DD8951DA84B68D5B2FE0879AA1C22DF22738BFE, /*hidden argument*/NULL);
		// }
		goto IL_0473;
	}

IL_043b:
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow))
		bool L_134;
		L_134 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)273), /*hidden argument*/NULL);
		if (!L_134)
		{
			goto IL_0457;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_135 = __this->get_a1_12();
		NullCheck(L_135);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_135, _stringLiteralF4EC3331B2888372138EB2110AEB8414565BC508, /*hidden argument*/NULL);
	}

IL_0457:
	{
		// if (Input.GetKeyDown(KeyCode.DownArrow))
		bool L_136;
		L_136 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)274), /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0473;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_137 = __this->get_a1_12();
		NullCheck(L_137);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_137, _stringLiteral3E62A28E6D19717C05020E9E9670CB0BA9AD7F9F, /*hidden argument*/NULL);
	}

IL_0473:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad1))
		bool L_138;
		L_138 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)257), /*hidden argument*/NULL);
		if (!L_138)
		{
			goto IL_048f;
		}
	}
	{
		// a2.text = "1";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_139 = __this->get_a2_13();
		NullCheck(L_139);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_139, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
	}

IL_048f:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad2))
		bool L_140;
		L_140 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)258), /*hidden argument*/NULL);
		if (!L_140)
		{
			goto IL_04ab;
		}
	}
	{
		// a2.text = "2";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_141 = __this->get_a2_13();
		NullCheck(L_141);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_141, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, /*hidden argument*/NULL);
	}

IL_04ab:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad3))
		bool L_142;
		L_142 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)259), /*hidden argument*/NULL);
		if (!L_142)
		{
			goto IL_04c7;
		}
	}
	{
		// a2.text = "3";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_143 = __this->get_a2_13();
		NullCheck(L_143);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_143, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, /*hidden argument*/NULL);
	}

IL_04c7:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad4))
		bool L_144;
		L_144 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)260), /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_04e3;
		}
	}
	{
		// a2.text = "4";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_145 = __this->get_a2_13();
		NullCheck(L_145);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_145, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, /*hidden argument*/NULL);
	}

IL_04e3:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad5))
		bool L_146;
		L_146 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)261), /*hidden argument*/NULL);
		if (!L_146)
		{
			goto IL_04ff;
		}
	}
	{
		// a2.text = "5";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_147 = __this->get_a2_13();
		NullCheck(L_147);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_147, _stringLiteralF7DDF59B44DDF9253B657C54053522CF694D3FBE, /*hidden argument*/NULL);
	}

IL_04ff:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad0))
		bool L_148;
		L_148 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)256), /*hidden argument*/NULL);
		if (!L_148)
		{
			goto IL_059f;
		}
	}
	{
		// Debug.Log(csvHandler.csvData[currentTrials][1] + ", " + csvHandler.csvData[currentTrials][2]);
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_149 = __this->get_csvHandler_16();
		NullCheck(L_149);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_150 = L_149->get_csvData_5();
		int32_t L_151 = __this->get_currentTrials_5();
		NullCheck(L_150);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_152;
		L_152 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_150, L_151, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_152);
		String_t* L_153;
		L_153 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_152, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_154 = __this->get_csvHandler_16();
		NullCheck(L_154);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_155 = L_154->get_csvData_5();
		int32_t L_156 = __this->get_currentTrials_5();
		NullCheck(L_155);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_157;
		L_157 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_155, L_156, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_157);
		String_t* L_158;
		L_158 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_157, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_159;
		L_159 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_153, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_158, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_159, /*hidden argument*/NULL);
		// drivePin(csvHandler.csvData[currentTrials][1], 0);
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_160 = __this->get_csvHandler_16();
		NullCheck(L_160);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_161 = L_160->get_csvData_5();
		int32_t L_162 = __this->get_currentTrials_5();
		NullCheck(L_161);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_163;
		L_163 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_161, L_162, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_163);
		String_t* L_164;
		L_164 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_163, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		canvasManager_U3CUpdateU3Eg__drivePinU7C17_0_m2277AD622F453DDB735A2B9625B5D751EA0CAA0F(__this, L_164, 0, /*hidden argument*/NULL);
		// drivePin(csvHandler.csvData[currentTrials][2], 1600);
		csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * L_165 = __this->get_csvHandler_16();
		NullCheck(L_165);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_166 = L_165->get_csvData_5();
		int32_t L_167 = __this->get_currentTrials_5();
		NullCheck(L_166);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_168;
		L_168 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_166, L_167, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_168);
		String_t* L_169;
		L_169 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_168, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		canvasManager_U3CUpdateU3Eg__drivePinU7C17_0_m2277AD622F453DDB735A2B9625B5D751EA0CAA0F(__this, L_169, ((int32_t)1600), /*hidden argument*/NULL);
	}

IL_059f:
	{
		// }
		return;
	}
}
// System.Void canvasManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasManager__ctor_mE2EE7F65D173DA3E44C9759EE989CBC99087867C (canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void canvasManager::<Update>g__drivePin|17_0(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasManager_U3CUpdateU3Eg__drivePinU7C17_0_m2277AD622F453DDB735A2B9625B5D751EA0CAA0F (canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * __this, String_t* ___s0, int32_t ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		String_t* L_0 = ___s0;
		(&V_0)->set_s_4(L_0);
		int32_t L_1 = ___delay1;
		(&V_0)->set_delay_2(L_1);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F  L_3 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_mEA0A7350014A56A0A6213816D98CBE012F1675F9_RuntimeMethod_var);
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
// System.Void csvHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler_Start_m7EA47D9709E1B2C579A01A341B59CF8075F21A59 (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC55E624407304B88ECEF642FE69D516A997BE362);
		s_Il2CppMethodInitialized = true;
	}
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// csvFile = Resources.Load("ex1_trials") as TextAsset; // Resources�ɂ���CSV�t�@�C�����i�[
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteralC55E624407304B88ECEF642FE69D516A997BE362, /*hidden argument*/NULL);
		__this->set_csvFile_4(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		// StringReader reader = new StringReader(csvFile.text); // TextAsset��StringReader�ɕϊ�
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_1 = __this->get_csvFile_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_1, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0050;
	}

IL_0028:
	{
		// string line = reader.ReadLine(); // 1�s���ǂݍ���
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_4);
		// List<string> lineList = new List<string>(line.Split(','));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
		L_8 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_5, L_7, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_9, (RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		V_1 = L_9;
		// csvData.Add(lineList); // csvData���X�g�ɒǉ�����
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_10 = __this->get_csvData_5();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_1;
		NullCheck(L_10);
		List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2(L_10, L_11, /*hidden argument*/List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
	}

IL_0050:
	{
		// while (reader.Peek() != -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_12);
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		// addColumn(csvData);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_14 = __this->get_csvData_5();
		csvHandler_addColumn_mBAB2492A5887D3F12A3621993A9D6F674CE7130A(__this, L_14, /*hidden argument*/NULL);
		// ShuffleList(csvData);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_15 = __this->get_csvData_5();
		csvHandler_ShuffleList_mC38216A63F83FEF7B31FBE61CE50B5D680E7270E(__this, L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
		V_2 = 0;
		goto IL_0116;
	}

IL_0078:
	{
		// Debug.Log(csvData[i][0] + " " + csvData[i][1] + " " + csvData[i][2] + " " + csvData[i][3] + " " + csvData[i][4]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_18 = __this->get_csvData_5();
		int32_t L_19 = V_2;
		NullCheck(L_18);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20;
		L_20 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_20, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_21);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_24 = __this->get_csvData_5();
		int32_t L_25 = V_2;
		NullCheck(L_24);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26;
		L_26 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_26, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_23;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_30 = __this->get_csvData_5();
		int32_t L_31 = V_2;
		NullCheck(L_30);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_32;
		L_32 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_32, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_29;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_36 = __this->get_csvData_5();
		int32_t L_37 = V_2;
		NullCheck(L_36);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_38;
		L_38 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_36, L_37, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_38, 3, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_39);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_35;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_42 = __this->get_csvData_5();
		int32_t L_43 = V_2;
		NullCheck(L_42);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_44;
		L_44 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_44, 4, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_45);
		String_t* L_46;
		L_46 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_46, /*hidden argument*/NULL);
		// for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0116:
	{
		// for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
		int32_t L_48 = V_2;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_49 = __this->get_csvData_5();
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_49, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_0078;
		}
	}
	{
		// }
		return;
	}
}
// System.Void csvHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler_Update_m19B9F1249FE3AFA506436A4248FC885696917FC5 (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void csvHandler::addColumn(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler_addColumn_mBAB2492A5887D3F12A3621993A9D6F674CE7130A (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___trialList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < trialList.Count; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// trialList[i].Add("");
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_0 = ___trialList0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// trialList[i].Add("");
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_3 = ___trialList0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5;
		L_5 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int i = 0; i < trialList.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < trialList.Count; i++)
		int32_t L_7 = V_0;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_8 = ___trialList0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_8, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void csvHandler::ShuffleList(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler_ShuffleList_mC38216A63F83FEF7B31FBE61CE50B5D680E7270E (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_3 = NULL;
	{
		// int columnCount = list.Count;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_0, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < columnCount; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_000b:
	{
		// int randomIndex = i + Random.Range(0,columnCount - i);
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_5));
		// List<string> temp = list[i];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_6 = ___list0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8;
		L_8 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		V_3 = L_8;
		// list[i] = list[randomIndex];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_9 = ___list0;
		int32_t L_10 = V_1;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_11 = ___list0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13;
		L_13 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B(L_9, L_10, L_13, /*hidden argument*/List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var);
		// list[randomIndex] = temp;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_14 = ___list0;
		int32_t L_15 = V_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = V_3;
		NullCheck(L_14);
		List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B(L_14, L_15, L_16, /*hidden argument*/List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var);
		// for (int i = 0; i < columnCount; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < columnCount; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void csvHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csvHandler__ctor_m4A0D7E92D4E6208D9894A6380FA7BE41882369AD (csvHandler_tE82E416BDEC7948B8F4F5FF8B6B06199CDA5D680 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<List<string>> csvData = new List<List<string>>(); // CSV�t�@�C���̒��g�����郊�X�g
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_0 = (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *)il2cpp_codegen_object_new(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618(L_0, /*hidden argument*/List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		__this->set_csvData_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ex2canvasManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2canvasManager_Start_m586C4F74CC638DBF53B2927E44AED0E05E586DF3 (ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496_m7F7D7FCFBD30BD8E2C8298D180C936FC8CD9D5F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AA2D901F5B20D59FCF9CC9AE7C7CF00DB83D490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1397641DBAA59DF76A7817204222D80B2B18DDA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DBFA78756A89FB292803470DE98175040F814E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D72F3B20FC8764604129E0F8CEE6B9775745A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C5455A057A13FBE5E11D06582D3E0D47B8CF8DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86F9CDF3972D89E2F93818CDEA436D60B0F98040);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB418987118CE3DE363EE1455B9B64EBFA6E3A74D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// csvHandlerObject = GameObject.Find("CSVHandler");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral63D72F3B20FC8764604129E0F8CEE6B9775745A2, /*hidden argument*/NULL);
		__this->set_csvHandlerObject_12(L_0);
		// csvHandler = csvHandlerObject.GetComponent<ex2csvHandler>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_csvHandlerObject_12();
		NullCheck(L_1);
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_2;
		L_2 = GameObject_GetComponent_Tisex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496_m7F7D7FCFBD30BD8E2C8298D180C936FC8CD9D5F7(L_1, /*hidden argument*/GameObject_GetComponent_Tisex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496_m7F7D7FCFBD30BD8E2C8298D180C936FC8CD9D5F7_RuntimeMethod_var);
		__this->set_csvHandler_13(L_2);
		// pinArrayManagerObject = GameObject.Find("serialManager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3DBFA78756A89FB292803470DE98175040F814E9, /*hidden argument*/NULL);
		__this->set_pinArrayManagerObject_14(L_3);
		// pinArrayManager = pinArrayManagerObject.GetComponent<pinArrayManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_pinArrayManagerObject_14();
		NullCheck(L_4);
		pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * L_5;
		L_5 = GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550(L_4, /*hidden argument*/GameObject_GetComponent_TispinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD_m8C4C41CAC8F7ED3762336F477B8C0FF9EE074550_RuntimeMethod_var);
		__this->set_pinArrayManager_15(L_5);
		// canvasStart = GameObject.Find("CanvasStart").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB418987118CE3DE363EE1455B9B64EBFA6E3A74D, /*hidden argument*/NULL);
		NullCheck(L_6);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7;
		L_7 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_6, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvasStart_6(L_7);
		// canvas1 = GameObject.Find("Canvas1").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral0AA2D901F5B20D59FCF9CC9AE7C7CF00DB83D490, /*hidden argument*/NULL);
		NullCheck(L_8);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_9;
		L_9 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_8, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas1_7(L_9);
		// canvas2 = GameObject.Find("Canvas2").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral7C5455A057A13FBE5E11D06582D3E0D47B8CF8DD, /*hidden argument*/NULL);
		NullCheck(L_10);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_11;
		L_11 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_10, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas2_8(L_11);
		// canvas3 = GameObject.Find("Canvas3").GetComponent<Canvas>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral1397641DBAA59DF76A7817204222D80B2B18DDA0, /*hidden argument*/NULL);
		NullCheck(L_12);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_13;
		L_13 = GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027(L_12, /*hidden argument*/GameObject_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD04A296AD303CADAF04E33F81F47E6F61081A027_RuntimeMethod_var);
		__this->set_canvas3_9(L_13);
		// IDInputField = GameObject.Find("IDInputField").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral86F9CDF3972D89E2F93818CDEA436D60B0F98040, /*hidden argument*/NULL);
		NullCheck(L_14);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_15;
		L_15 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_14, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_IDInputField_11(L_15);
		// a1 = GameObject.Find("a1").GetComponent<InputField>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral354F0EC3B2D3EC992153ADA0C96F73947D26E82E, /*hidden argument*/NULL);
		NullCheck(L_16);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_17;
		L_17 = GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C(L_16, /*hidden argument*/GameObject_GetComponent_TisInputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_m3E3EE98663CCC30776E0944E1D251294B327691C_RuntimeMethod_var);
		__this->set_a1_10(L_17);
		// canvasStart.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_18 = __this->get_canvasStart_6();
		NullCheck(L_18);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_18, (bool)1, /*hidden argument*/NULL);
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_19 = __this->get_canvas1_7();
		NullCheck(L_19);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)0, /*hidden argument*/NULL);
		// canvas2.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_20 = __this->get_canvas2_8();
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
		// canvas3.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_21 = __this->get_canvas3_9();
		NullCheck(L_21);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_21, (bool)0, /*hidden argument*/NULL);
		// pinArrayManager.serialPinArray.Write("b");//M5Stack������2�̃��[�h�ɂ���
		pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * L_22 = __this->get_pinArrayManager_15();
		NullCheck(L_22);
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_23 = L_22->get_serialPinArray_6();
		NullCheck(L_23);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_23, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ex2canvasManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2canvasManager_Update_m9F66C2A6FF451C1B527036210BBEC48677D4651E (ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD8951DA84B68D5B2FE0879AA1C22DF22738BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E62A28E6D19717C05020E9E9670CB0BA9AD7F9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67E3917459AA92D4A01982EE3E9D27BFA57AD8F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral872CAD4CA2C6627CB6131C62855A78319B8645C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9B19F0C64625940ECCC1C3E0C68BADA4E4EF36C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4EC3331B2888372138EB2110AEB8414565BC508);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)271), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_02c5;
		}
	}
	{
		// if (currentCanvas == 0 &&
		//     IDInputField.text != "")
		int32_t L_1 = __this->get_currentCanvas_4();
		if (L_1)
		{
			goto IL_0085;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_IDInputField_11();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0085;
		}
	}
	{
		// sw = new StreamWriter(@"Assets\" + IDInputField.text + "_Result_ex2.csv") { AutoFlush = true };
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_5 = __this->get_IDInputField_11();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral872CAD4CA2C6627CB6131C62855A78319B8645C8, L_6, _stringLiteralA9B19F0C64625940ECCC1C3E0C68BADA4E4EF36C, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_8 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_mE341C28EFA3FE0484823233273DBE251A11BD4FC(L_8, L_7, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_9 = L_8;
		NullCheck(L_9);
		VirtActionInvoker1< bool >::Invoke(21 /* System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean) */, L_9, (bool)1);
		__this->set_sw_16(L_9);
		// canvasStart.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_10 = __this->get_canvasStart_6();
		NullCheck(L_10);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_10, (bool)0, /*hidden argument*/NULL);
		// canvas1.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_11 = __this->get_canvas1_7();
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)1, /*hidden argument*/NULL);
		// currentCanvas += 1;
		int32_t L_12 = __this->get_currentCanvas_4();
		__this->set_currentCanvas_4(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		// }
		goto IL_028c;
	}

IL_0085:
	{
		// else if (currentCanvas == 1)
		int32_t L_13 = __this->get_currentCanvas_4();
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_015a;
		}
	}
	{
		// Debug.Log(int.Parse(csvHandler.csvData[currentTrials][1]));
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_14 = __this->get_csvHandler_13();
		NullCheck(L_14);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_15 = L_14->get_csvData_5();
		int32_t L_16 = __this->get_currentTrials_5();
		NullCheck(L_15);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17;
		L_17 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_17, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_19;
		L_19 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_21, /*hidden argument*/NULL);
		// if (0 <= int.Parse(csvHandler.csvData[currentTrials][1]) &&
		//          int.Parse(csvHandler.csvData[currentTrials][1]) <= 3)
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_22 = __this->get_csvHandler_13();
		NullCheck(L_22);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_23 = L_22->get_csvData_5();
		int32_t L_24 = __this->get_currentTrials_5();
		NullCheck(L_23);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_25;
		L_25 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_25, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_27;
		L_27 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_26, /*hidden argument*/NULL);
		if ((((int32_t)0) > ((int32_t)L_27)))
		{
			goto IL_012f;
		}
	}
	{
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_28 = __this->get_csvHandler_13();
		NullCheck(L_28);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_29 = L_28->get_csvData_5();
		int32_t L_30 = __this->get_currentTrials_5();
		NullCheck(L_29);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31;
		L_31 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_31, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		int32_t L_33;
		L_33 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_32, /*hidden argument*/NULL);
		if ((((int32_t)L_33) > ((int32_t)3)))
		{
			goto IL_012f;
		}
	}
	{
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_34 = __this->get_canvas1_7();
		NullCheck(L_34);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_34, (bool)0, /*hidden argument*/NULL);
		// canvas2.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_35 = __this->get_canvas2_8();
		NullCheck(L_35);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_35, (bool)1, /*hidden argument*/NULL);
		// currentCanvas += 1;
		int32_t L_36 = __this->get_currentCanvas_4();
		__this->set_currentCanvas_4(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)));
		// }
		goto IL_028c;
	}

IL_012f:
	{
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_37 = __this->get_canvas1_7();
		NullCheck(L_37);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_37, (bool)0, /*hidden argument*/NULL);
		// canvas2.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_38 = __this->get_canvas2_8();
		NullCheck(L_38);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_38, (bool)1, /*hidden argument*/NULL);
		// currentCanvas += 1;
		int32_t L_39 = __this->get_currentCanvas_4();
		__this->set_currentCanvas_4(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		// }
		goto IL_028c;
	}

IL_015a:
	{
		// else if (currentCanvas == 2 &&
		//          a1.text != "")
		int32_t L_40 = __this->get_currentCanvas_4();
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_028c;
		}
	}
	{
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_41 = __this->get_a1_10();
		NullCheck(L_41);
		String_t* L_42;
		L_42 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_41, /*hidden argument*/NULL);
		bool L_43;
		L_43 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_42, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_028c;
		}
	}
	{
		// csvHandler.csvData[currentTrials][2] = a1.text;
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_44 = __this->get_csvHandler_13();
		NullCheck(L_44);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_45 = L_44->get_csvData_5();
		int32_t L_46 = __this->get_currentTrials_5();
		NullCheck(L_45);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_47;
		L_47 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_48 = __this->get_a1_10();
		NullCheck(L_48);
		String_t* L_49;
		L_49 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline(L_48, /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09(L_47, 2, L_49, /*hidden argument*/List_1_set_Item_mE4013DC2581DCF61699120630975AE441FD89A09_RuntimeMethod_var);
		// Debug.Log(csvHandler.csvData[currentTrials][0]
		//     + " " + csvHandler.csvData[currentTrials][1]
		//     + " " + csvHandler.csvData[currentTrials][2]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51 = L_50;
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_52 = __this->get_csvHandler_13();
		NullCheck(L_52);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_53 = L_52->get_csvData_5();
		int32_t L_54 = __this->get_currentTrials_5();
		NullCheck(L_53);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_55;
		L_55 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_55, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_56);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_56);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_51;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_59 = __this->get_csvHandler_13();
		NullCheck(L_59);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_60 = L_59->get_csvData_5();
		int32_t L_61 = __this->get_currentTrials_5();
		NullCheck(L_60);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_62;
		L_62 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_60, L_61, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_62);
		String_t* L_63;
		L_63 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_62, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_63);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_58;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_66 = __this->get_csvHandler_13();
		NullCheck(L_66);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_67 = L_66->get_csvData_5();
		int32_t L_68 = __this->get_currentTrials_5();
		NullCheck(L_67);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_69;
		L_69 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_67, L_68, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_69);
		String_t* L_70;
		L_70 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_69, 2, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_70);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_70);
		String_t* L_71;
		L_71 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_71, /*hidden argument*/NULL);
		// a1.text = "";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_72 = __this->get_a1_10();
		NullCheck(L_72);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_72, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// sw.WriteLine(string.Join(",", csvHandler.csvData[currentTrials]));
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_73 = __this->get_sw_16();
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_74 = __this->get_csvHandler_13();
		NullCheck(L_74);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_75 = L_74->get_csvData_5();
		int32_t L_76 = __this->get_currentTrials_5();
		NullCheck(L_75);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_77;
		L_77 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_75, L_76, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		String_t* L_78;
		L_78 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_77, /*hidden argument*/NULL);
		NullCheck(L_73);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_73, L_78);
		// canvas2.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_79 = __this->get_canvas2_8();
		NullCheck(L_79);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_79, (bool)0, /*hidden argument*/NULL);
		// canvas1.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_80 = __this->get_canvas1_7();
		NullCheck(L_80);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_80, (bool)1, /*hidden argument*/NULL);
		// currentCanvas = 1;
		__this->set_currentCanvas_4(1);
		// currentTrials += 1;
		int32_t L_81 = __this->get_currentTrials_5();
		__this->set_currentTrials_5(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)));
	}

IL_028c:
	{
		// if (currentTrials >= 80)
		int32_t L_82 = __this->get_currentTrials_5();
		if ((((int32_t)L_82) < ((int32_t)((int32_t)80))))
		{
			goto IL_02c5;
		}
	}
	{
		// canvas1.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_83 = __this->get_canvas1_7();
		NullCheck(L_83);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_83, (bool)0, /*hidden argument*/NULL);
		// canvas2.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_84 = __this->get_canvas2_8();
		NullCheck(L_84);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_84, (bool)0, /*hidden argument*/NULL);
		// canvas3.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_85 = __this->get_canvas3_9();
		NullCheck(L_85);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_85, (bool)1, /*hidden argument*/NULL);
		// sw.Close();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_86 = __this->get_sw_16();
		NullCheck(L_86);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_86);
	}

IL_02c5:
	{
		// if (currentCanvas == 2)
		int32_t L_87 = __this->get_currentCanvas_4();
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_033e;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_88;
		L_88 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)275), /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_02ea;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_89 = __this->get_a1_10();
		NullCheck(L_89);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_89, _stringLiteral67E3917459AA92D4A01982EE3E9D27BFA57AD8F4, /*hidden argument*/NULL);
	}

IL_02ea:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_90;
		L_90 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)276), /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_0306;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_91 = __this->get_a1_10();
		NullCheck(L_91);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_91, _stringLiteral3DD8951DA84B68D5B2FE0879AA1C22DF22738BFE, /*hidden argument*/NULL);
	}

IL_0306:
	{
		// if (Input.GetKeyDown(KeyCode.UpArrow))
		bool L_92;
		L_92 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)273), /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_0322;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_93 = __this->get_a1_10();
		NullCheck(L_93);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_93, _stringLiteralF4EC3331B2888372138EB2110AEB8414565BC508, /*hidden argument*/NULL);
	}

IL_0322:
	{
		// if (Input.GetKeyDown(KeyCode.DownArrow))
		bool L_94;
		L_94 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)274), /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_033e;
		}
	}
	{
		// a1.text = "��";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_95 = __this->get_a1_10();
		NullCheck(L_95);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_95, _stringLiteral3E62A28E6D19717C05020E9E9670CB0BA9AD7F9F, /*hidden argument*/NULL);
	}

IL_033e:
	{
		// if (Input.GetKeyDown(KeyCode.Keypad0))
		bool L_96;
		L_96 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)256), /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_038e;
		}
	}
	{
		// Debug.Log(csvHandler.csvData[currentTrials][1]);
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_97 = __this->get_csvHandler_13();
		NullCheck(L_97);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_98 = L_97->get_csvData_5();
		int32_t L_99 = __this->get_currentTrials_5();
		NullCheck(L_98);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_100;
		L_100 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_98, L_99, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_100);
		String_t* L_101;
		L_101 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_100, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_101, /*hidden argument*/NULL);
		// drivePin(csvHandler.csvData[currentTrials][1], 0);
		ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * L_102 = __this->get_csvHandler_13();
		NullCheck(L_102);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_103 = L_102->get_csvData_5();
		int32_t L_104 = __this->get_currentTrials_5();
		NullCheck(L_103);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_105;
		L_105 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_103, L_104, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_105);
		String_t* L_106;
		L_106 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_105, 1, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		ex2canvasManager_U3CUpdateU3Eg__drivePinU7C14_0_m276DB364AEB341B37AA2C15AD99DE46469C4D0CA(__this, L_106, 0, /*hidden argument*/NULL);
	}

IL_038e:
	{
		// }
		return;
	}
}
// System.Void ex2canvasManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2canvasManager__ctor_m53A2DEBB80FB90B21C1E899410D868E4A368C99D (ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ex2canvasManager::<Update>g__drivePin|14_0(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2canvasManager_U3CUpdateU3Eg__drivePinU7C14_0_m276DB364AEB341B37AA2C15AD99DE46469C4D0CA (ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * __this, String_t* ___s0, int32_t ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		String_t* L_0 = ___s0;
		(&V_0)->set_s_4(L_0);
		int32_t L_1 = ___delay1;
		(&V_0)->set_delay_2(L_1);
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m878314259623CC47A2EBAEEF2F8E8D6B61560FA5(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE  L_3 = V_0;
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)(&V_1), (U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mFD8BAFE1AE04FBFBCBF6B8EB2E18493CF6011CCA_RuntimeMethod_var);
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
// System.Void ex2csvHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler_Start_m653982E9B36B56F1A0A0209AFF91FE3E91645048 (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053DA1130F1A3E18467DAFFC69ECFFA484F12DB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * V_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// csvFile = Resources.Load("ex2_trials") as TextAsset; // Resources�ɂ���CSV�t�@�C�����i�[
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0;
		L_0 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral053DA1130F1A3E18467DAFFC69ECFFA484F12DB9, /*hidden argument*/NULL);
		__this->set_csvFile_4(((TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234_il2cpp_TypeInfo_var)));
		// StringReader reader = new StringReader(csvFile.text); // TextAsset��StringReader�ɕϊ�
		TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_1 = __this->get_csvFile_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextAsset_get_text_m89A756483BA3218E173F5D62A582070714BC1218(L_1, /*hidden argument*/NULL);
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0050;
	}

IL_0028:
	{
		// string line = reader.ReadLine(); // 1�s���ǂݍ���
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_4);
		// List<string> lineList = new List<string>(line.Split(','));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8;
		L_8 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_5, L_7, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_9, (RuntimeObject*)(RuntimeObject*)L_8, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		V_1 = L_9;
		// csvData.Add(lineList); // csvData���X�g�ɒǉ�����
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_10 = __this->get_csvData_5();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = V_1;
		NullCheck(L_10);
		List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2(L_10, L_11, /*hidden argument*/List_1_Add_m9096E7678DA5FDE78F077E8AA67892B5D80F07C2_RuntimeMethod_var);
	}

IL_0050:
	{
		// while (reader.Peek() != -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_12);
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		// addColumn(csvData);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_14 = __this->get_csvData_5();
		ex2csvHandler_addColumn_m7986656A6F5D421584C79F2DE0989D946E6FD0DC(__this, L_14, /*hidden argument*/NULL);
		// ShuffleList(csvData);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_15 = __this->get_csvData_5();
		ex2csvHandler_ShuffleList_mCC422B2AA556C6D17DC93D4B7127821A08AC2AD2(__this, L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
		V_2 = 0;
		goto IL_00ac;
	}

IL_0075:
	{
		// Debug.Log(csvData[i][0] + " " + csvData[i][0]);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_16 = __this->get_csvData_5();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18;
		L_18 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_18, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_20 = __this->get_csvData_5();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_22;
		L_22 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_22, 0, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		String_t* L_24;
		L_24 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00ac:
	{
		// for (int i = 0; i < csvData.Count; i++) // csvData���X�g�̏����𖞂����l�̐��i�S�āj
		int32_t L_26 = V_2;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_27 = __this->get_csvData_5();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_27, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ex2csvHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler_Update_m9DD4DD327A236B829CEE4E296E4ADA980868A556 (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ex2csvHandler::addColumn(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler_addColumn_m7986656A6F5D421584C79F2DE0989D946E6FD0DC (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___trialList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < trialList.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// trialList[i].Add("");
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_0 = ___trialList0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2;
		L_2 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// for (int i = 0; i < trialList.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < trialList.Count; i++)
		int32_t L_4 = V_0;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_5 = ___trialList0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_5, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ex2csvHandler::ShuffleList(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler_ShuffleList_mCC422B2AA556C6D17DC93D4B7127821A08AC2AD2 (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_3 = NULL;
	{
		// int columnCount = list.Count;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_inline(L_0, /*hidden argument*/List_1_get_Count_m624E90B5DBDD6D22A2473D7D31EDE6C6C02A6F01_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = 0; i < columnCount; i++)
		V_1 = 0;
		goto IL_0039;
	}

IL_000b:
	{
		// int randomIndex = i + Random.Range(0, columnCount - i);
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_5));
		// List<string> temp = list[i];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_6 = ___list0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8;
		L_8 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		V_3 = L_8;
		// list[i] = list[randomIndex];
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_9 = ___list0;
		int32_t L_10 = V_1;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_11 = ___list0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13;
		L_13 = List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m78110F7651050364864784641729B55A1352E0C8_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B(L_9, L_10, L_13, /*hidden argument*/List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var);
		// list[randomIndex] = temp;
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_14 = ___list0;
		int32_t L_15 = V_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = V_3;
		NullCheck(L_14);
		List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B(L_14, L_15, L_16, /*hidden argument*/List_1_set_Item_m6860DC2A2058B491D614EEFED652155B5C74550B_RuntimeMethod_var);
		// for (int i = 0; i < columnCount; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0039:
	{
		// for (int i = 0; i < columnCount; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ex2csvHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ex2csvHandler__ctor_mFD5E3BE060FA26E66948319EB9B30166FBE7E6D9 (ex2csvHandler_t8ADEDC4007893F0A425896AFDEAA7E460A6F3496 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<List<string>> csvData = new List<List<string>>(); // CSV�t�@�C���̒��g�����郊�X�g
		List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 * L_0 = (List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6 *)il2cpp_codegen_object_new(List_1_t8FEB0640899BD94FB9BB936BE20B6A2BBF15A8F6_il2cpp_TypeInfo_var);
		List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618(L_0, /*hidden argument*/List_1__ctor_mBE90C58307B4164DBD4E10EDC73059FB0D62D618_RuntimeMethod_var);
		__this->set_csvData_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void pinArrayManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pinArrayManager_Start_m2BFD1468682AE549437979918D2DB7EB5D95FE10 (pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialPinArray = new SerialPort(portName, baudRate, Parity.None, 8, StopBits.One);
		String_t* L_0 = __this->get_portName_4();
		int32_t L_1 = __this->get_baudRate_5();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 *)il2cpp_codegen_object_new(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		SerialPort__ctor_m15C11FB9BB0F68CABB982CD4252D78FBDC289EBD(L_2, L_0, L_1, 0, 8, 1, /*hidden argument*/NULL);
		__this->set_serialPinArray_6(L_2);
		// serialPinArray.Open();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serialPinArray_6();
		NullCheck(L_3);
		SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void pinArrayManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pinArrayManager_Update_mB45BFD80B1D4FD2D3C6CFF238F1535686CBDB834 (pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void pinArrayManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pinArrayManager__ctor_mEDC54F0ABDF0E18B2A31BBC38AC968F9671E6624 (pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string portName = "COM3";
		__this->set_portName_4(_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		// int baudRate = 115200;
		__this->set_baudRate_5(((int32_t)115200));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void serialManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Start_m27A2F5BD9C7CA07869A58D2BEC50DFAF92AA4708 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA121BA2CE589CF53986C2480E22C1ACA25A38BAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC44AB31978AD5738BAAF9DFDA1FEBDFB8059C0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// forceBar = GameObject.Find("forceBar").GetComponent<Scrollbar>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCC44AB31978AD5738BAAF9DFDA1FEBDFB8059C0D, /*hidden argument*/NULL);
		NullCheck(L_0);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_1;
		L_1 = GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4(L_0, /*hidden argument*/GameObject_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mF55B524AB7CED0326B6554B73694588DBA54D2B4_RuntimeMethod_var);
		__this->set_forceBar_7(L_1);
		// forceIndicator = GameObject.Find("forceIndicator").GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralA121BA2CE589CF53986C2480E22C1ACA25A38BAD, /*hidden argument*/NULL);
		NullCheck(L_2);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3;
		L_3 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_2, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		__this->set_forceIndicator_8(L_3);
		// Open();
		serialManager_Open_m4E70F0621D6B1007A62EE63740234FA362565887(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void serialManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Update_m3ACBDE3A2B9880723B1A79D5509D41CAF0F608AC (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Q))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)113), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// GetInitVal();
		serialManager_GetInitVal_mA89C5E778597D37402BCA5E0641A2A473891834F(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// if(2.5<=(float)(data[2] * -1) && (float)(data[2] * -1) <= 3.5)
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = __this->get_data_20();
		NullCheck(L_1);
		int32_t L_2 = 2;
		double L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((double)(2.5)) <= ((double)((double)((double)((float)((float)((double)il2cpp_codegen_multiply((double)L_3, (double)(-1.0)))))))))))
		{
			goto IL_0064;
		}
	}
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = __this->get_data_20();
		NullCheck(L_4);
		int32_t L_5 = 2;
		double L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((double)((double)((double)((float)((float)((double)il2cpp_codegen_multiply((double)L_6, (double)(-1.0)))))))) <= ((double)(3.5)))))
		{
			goto IL_0064;
		}
	}
	{
		// forceIndicator.image.color = Color.green;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_forceIndicator_8();
		NullCheck(L_7);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_7, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// }
		goto IL_0079;
	}

IL_0064:
	{
		// forceIndicator.image.color = Color.gray;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_forceIndicator_8();
		NullCheck(L_10);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11;
		L_11 = Selectable_get_image_mAB45C107C7C858ECBEFFFF540B8C69746BB6C6FE(L_10, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_gray_m34BEEC2EEF30819B433125EF748CE22BE17C9B6E(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_0079:
	{
		// refreshBarVal((float)(data[2] / 6 * -1));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = __this->get_data_20();
		NullCheck(L_13);
		int32_t L_14 = 2;
		double L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		serialManager_refreshBarVal_m1E6B54AAB0AFFA47C363C9B901042119AF736420(__this, ((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)L_15/(double)(6.0))), (double)(-1.0))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void serialManager::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_OnDestroy_m7FE77B26274B02F2EF2D236865E087B63E181DC7 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	{
		// Close();
		serialManager_Close_mDC230FD6A97F3131CDA4195718A04F2BA4F80633(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void serialManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_FixedUpdate_mE3EF4D74E4FA6D381A557E8942B6BFA1F334F264 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flag_rev == 1)//�厲���x���[���_�o�͒l�擾
		int32_t L_0 = __this->get_flag_rev_9();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Initialized");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral12DB585CD7C58149D9E30B1F88C95AA55FCFC680, /*hidden argument*/NULL);
		// GetSensitivity();//�厲���x�擾
		serialManager_GetSensitivity_m19C6FF3DC3CDF90E6A7FC79A3B4B8FB319236555(__this, /*hidden argument*/NULL);
		// GetInitVal();//�[���_�o�͒l�擾
		serialManager_GetInitVal_mA89C5E778597D37402BCA5E0641A2A473891834F(__this, /*hidden argument*/NULL);
		// flag_rev = 2;
		__this->set_flag_rev_9(2);
	}

IL_0026:
	{
		// if (flag_rev == 2)//�o�̓g���N���v���D�����炭10�b
		int32_t L_1 = __this->get_flag_rev_9();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0035;
		}
	}
	{
		// GetMeasuredVal();//�o�̓g���N�v��
		serialManager_GetMeasuredVal_mAF1988AEA1A03282F8860917D8BFAD040942B303(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void serialManager::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Open_m4E70F0621D6B1007A62EE63740234FA362565887 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serial = new SerialPort(portName, baudRate, Parity.None, 8, StopBits.One);
		String_t* L_0 = __this->get_portName_10();
		int32_t L_1 = __this->get_baudRate_11();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = (SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 *)il2cpp_codegen_object_new(SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636_il2cpp_TypeInfo_var);
		SerialPort__ctor_m15C11FB9BB0F68CABB982CD4252D78FBDC289EBD(L_2, L_0, L_1, 0, 8, 1, /*hidden argument*/NULL);
		__this->set_serial_12(L_2);
		// serial.Open();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_3 = __this->get_serial_12();
		NullCheck(L_3);
		SerialPort_Open_m8AD6DD164A6CA49E736D1D3C7CADE54264335A63(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void serialManager::GetSensitivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_GetSensitivity_m19C6FF3DC3CDF90E6A7FC79A3B4B8FB319236555 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// serial.DiscardInBuffer();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serial_12();
		NullCheck(L_0);
		SerialPort_DiscardInBuffer_m331F424042FF88A80630CEF6F235BD74C75BBB99(L_0, /*hidden argument*/NULL);
		// serial.Write("p");
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serial_12();
		NullCheck(L_1);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_1, _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B, /*hidden argument*/NULL);
		// Thread.Sleep(1);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
		// string tmp = serial.ReadLine();//�厲���x���擾
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = __this->get_serial_12();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// str = tmp.Split(',');//�R���}��؂�𕪊�
		String_t* L_4 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_4, L_6, /*hidden argument*/NULL);
		__this->set_str_21(L_7);
		// sensi[0] = double.Parse(str[0]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_8 = __this->get_sensi_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = __this->get_str_21();
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_12);
		// sensi[1] = double.Parse(str[1]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_13 = __this->get_sensi_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = __this->get_str_21();
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		double L_17;
		L_17 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_17);
		// sensi[2] = double.Parse(str[2]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_18 = __this->get_sensi_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = __this->get_str_21();
		NullCheck(L_19);
		int32_t L_20 = 2;
		String_t* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		double L_22;
		L_22 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)L_22);
		// sensi[3] = double.Parse(str[3]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_23 = __this->get_sensi_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = __this->get_str_21();
		NullCheck(L_24);
		int32_t L_25 = 3;
		String_t* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		double L_27;
		L_27 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)L_27);
		// sensi[4] = double.Parse(str[4]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_28 = __this->get_sensi_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = __this->get_str_21();
		NullCheck(L_29);
		int32_t L_30 = 4;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		double L_32;
		L_32 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)L_32);
		// sensi[5] = double.Parse(str[5]);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_33 = __this->get_sensi_17();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = __this->get_str_21();
		NullCheck(L_34);
		int32_t L_35 = 5;
		String_t* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		double L_37;
		L_37 = Double_Parse_mFF5B29ED0585A4847BFE654ABB9E915DFE21B63E(L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)L_37);
		// }
		return;
	}
}
// System.Void serialManager::GetInitVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_GetInitVal_mA89C5E778597D37402BCA5E0641A2A473891834F (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// serial.DiscardInBuffer();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serial_12();
		NullCheck(L_0);
		SerialPort_DiscardInBuffer_m331F424042FF88A80630CEF6F235BD74C75BBB99(L_0, /*hidden argument*/NULL);
		// serial.Write("R");
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serial_12();
		NullCheck(L_1);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_1, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		// Thread.Sleep(1);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
		// string tmp = serial.ReadLine();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = __this->get_serial_12();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// inivals[0] = Convert.ToInt32(tmp.Substring(1, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_inivals_18();
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 1, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_6, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_7);
		// inivals[1] = Convert.ToInt32(tmp.Substring(5, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_inivals_18();
		String_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_9, 5, 4, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_10, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_11);
		// inivals[2] = Convert.ToInt32(tmp.Substring(9, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_inivals_18();
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_13, ((int32_t)9), 4, /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_14, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_15);
		// inivals[3] = Convert.ToInt32(tmp.Substring(13, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = __this->get_inivals_18();
		String_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, ((int32_t)13), 4, /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_18, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_19);
		// inivals[4] = Convert.ToInt32(tmp.Substring(17, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = __this->get_inivals_18();
		String_t* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_21, ((int32_t)17), 4, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_22, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_23);
		// inivals[5] = Convert.ToInt32(tmp.Substring(21, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_inivals_18();
		String_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_25, ((int32_t)21), 4, /*hidden argument*/NULL);
		int32_t L_27;
		L_27 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_26, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_27);
		// }
		return;
	}
}
// System.Void serialManager::GetMeasuredVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_GetMeasuredVal_mAF1988AEA1A03282F8860917D8BFAD040942B303 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// serial.DiscardInBuffer();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serial_12();
		NullCheck(L_0);
		SerialPort_DiscardInBuffer_m331F424042FF88A80630CEF6F235BD74C75BBB99(L_0, /*hidden argument*/NULL);
		// serial.Write("R");
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_1 = __this->get_serial_12();
		NullCheck(L_1);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_1, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		// Thread.Sleep(1);
		Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(1, /*hidden argument*/NULL);
		// string tmp = serial.ReadLine();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = __this->get_serial_12();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SerialPort_ReadLine_mA740CD9A1AAB5E391B35493D56845843EBE07ADE(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// measuredvals[0] = Convert.ToInt32(tmp.Substring(1, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_measuredvals_19();
		String_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_5, 1, 4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_6, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_7);
		// measuredvals[1] = Convert.ToInt32(tmp.Substring(5, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_measuredvals_19();
		String_t* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_9, 5, 4, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_10, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_11);
		// measuredvals[2] = Convert.ToInt32(tmp.Substring(9, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_measuredvals_19();
		String_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_13, ((int32_t)9), 4, /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_14, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_15);
		// measuredvals[3] = Convert.ToInt32(tmp.Substring(13, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = __this->get_measuredvals_19();
		String_t* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_17, ((int32_t)13), 4, /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_18, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_19);
		// measuredvals[4] = Convert.ToInt32(tmp.Substring(17, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = __this->get_measuredvals_19();
		String_t* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_21, ((int32_t)17), 4, /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_22, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_23);
		// measuredvals[5] = Convert.ToInt32(tmp.Substring(21, 4), 16);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_measuredvals_19();
		String_t* L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_25, ((int32_t)21), 4, /*hidden argument*/NULL);
		int32_t L_27;
		L_27 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_26, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_27);
		// data[0] = (double)(measuredvals[0] - inivals[0]) / sensi[0];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_28 = __this->get_data_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = __this->get_measuredvals_19();
		NullCheck(L_29);
		int32_t L_30 = 0;
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = __this->get_inivals_18();
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_35 = __this->get_sensi_17();
		NullCheck(L_35);
		int32_t L_36 = 0;
		double L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)L_34))))/(double)L_37)));
		// data[1] = (double)(measuredvals[1] - inivals[1]) / sensi[1];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_38 = __this->get_data_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = __this->get_measuredvals_19();
		NullCheck(L_39);
		int32_t L_40 = 1;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = __this->get_inivals_18();
		NullCheck(L_42);
		int32_t L_43 = 1;
		int32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_45 = __this->get_sensi_17();
		NullCheck(L_45);
		int32_t L_46 = 1;
		double L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_44))))/(double)L_47)));
		// data[2] = (double)(measuredvals[2] - inivals[2]) / sensi[2];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_48 = __this->get_data_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = __this->get_measuredvals_19();
		NullCheck(L_49);
		int32_t L_50 = 2;
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = __this->get_inivals_18();
		NullCheck(L_52);
		int32_t L_53 = 2;
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_55 = __this->get_sensi_17();
		NullCheck(L_55);
		int32_t L_56 = 2;
		double L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)L_54))))/(double)L_57)));
		// data[3] = (double)(measuredvals[3] - inivals[3]) / sensi[3];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_58 = __this->get_data_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = __this->get_measuredvals_19();
		NullCheck(L_59);
		int32_t L_60 = 3;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = __this->get_inivals_18();
		NullCheck(L_62);
		int32_t L_63 = 3;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_65 = __this->get_sensi_17();
		NullCheck(L_65);
		int32_t L_66 = 3;
		double L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (double)((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_64))))/(double)L_67)));
		// data[4] = (double)(measuredvals[4] - inivals[4]) / sensi[4];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_68 = __this->get_data_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = __this->get_measuredvals_19();
		NullCheck(L_69);
		int32_t L_70 = 4;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = __this->get_inivals_18();
		NullCheck(L_72);
		int32_t L_73 = 4;
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_75 = __this->get_sensi_17();
		NullCheck(L_75);
		int32_t L_76 = 4;
		double L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(4), (double)((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)L_74))))/(double)L_77)));
		// data[5] = (double)(measuredvals[5] - inivals[5]) / sensi[5];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_78 = __this->get_data_20();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = __this->get_measuredvals_19();
		NullCheck(L_79);
		int32_t L_80 = 5;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = __this->get_inivals_18();
		NullCheck(L_82);
		int32_t L_83 = 5;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_85 = __this->get_sensi_17();
		NullCheck(L_85);
		int32_t L_86 = 5;
		double L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(5), (double)((double)((double)((double)((double)((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_84))))/(double)L_87)));
		// }
		return;
	}
}
// System.Void serialManager::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Send_m7DB61E0C6A691B0036985EB2AAAAEA5AA6BC3EFE (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, String_t* ___data0, const RuntimeMethod* method)
{
	{
		// if (serial.IsOpen)
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_0 = __this->get_serial_12();
		NullCheck(L_0);
		bool L_1;
		L_1 = SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// serial.Write(data);
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_2 = __this->get_serial_12();
		String_t* L_3 = ___data0;
		NullCheck(L_2);
		SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void serialManager::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_Close_mDC230FD6A97F3131CDA4195718A04F2BA4F80633 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	{
		// isRunning = false;
		__this->set_isRunning_14((bool)0);
		// if (_thread != null && _thread.IsAlive)
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = __this->get__thread_13();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_1 = __this->get__thread_13();
		NullCheck(L_1);
		bool L_2;
		L_2 = Thread_get_IsAlive_mFA0C1391D1A22D18A7D010F251D537530B04E015(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _thread.Join();
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_3 = __this->get__thread_13();
		NullCheck(L_3);
		Thread_Join_m7233E8FA960E446B49B0891B16EBE069265032F5(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (serial != null && serial.IsOpen)
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_4 = __this->get_serial_12();
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_5 = __this->get_serial_12();
		NullCheck(L_5);
		bool L_6;
		L_6 = SerialPort_get_IsOpen_m67DAEA08CB7DDEF1144419F6C5F09F4E3C3D3D39(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		// serial.Close();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_7 = __this->get_serial_12();
		NullCheck(L_7);
		SerialPort_Close_m288C294F0F4AF5508E932492937DFCD348AB9C34(L_7, /*hidden argument*/NULL);
		// serial.Dispose();
		SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_8 = __this->get_serial_12();
		NullCheck(L_8);
		Component_Dispose_mC05DA7EBB2CA50E4854BED0FC992770E81771593(L_8, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void serialManager::refreshBarVal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager_refreshBarVal_m1E6B54AAB0AFFA47C363C9B901042119AF736420 (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// forceBar.value = (float)(data[2] / 6 * -1);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_0 = __this->get_forceBar_7();
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = __this->get_data_20();
		NullCheck(L_1);
		int32_t L_2 = 2;
		double L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_0, ((float)((float)((double)il2cpp_codegen_multiply((double)((double)((double)L_3/(double)(6.0))), (double)(-1.0))))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void serialManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void serialManager__ctor_m3CE082A505CE13F4174448516F6D202EA2A9E8DD (serialManager_t2146DA6ECFC349913AC8110B1A953DB2982162DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76A80085B7D8B56CB4CF9A6E7A48B3502974F1AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string portName = "COM4";
		__this->set_portName_10(_stringLiteral76A80085B7D8B56CB4CF9A6E7A48B3502974F1AB);
		// public int baudRate = 921600;
		__this->set_baudRate_11(((int32_t)921600));
		// private byte[] sendMessage = new byte[25];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->set_sendMessage_16(L_0);
		// double[] sensi = new double[6];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_sensi_17(L_1);
		// int[] inivals = new int[6];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_inivals_18(L_2);
		// int[] measuredvals = new int[6];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_measuredvals_19(L_3);
		// public double[] data = new double[6];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_4 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_data_20(L_4);
		// public string[] str = new string[6];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->set_str_21(L_5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void canvasManager/<<Update>g__drivePin|17_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_MoveNext_m9FC0FDD834EF3120CE5DE1B21D8A27C4E47636F3 (U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b;
			}
		}

IL_0011:
		{
			// await Task.Delay(delay);
			int32_t L_3 = __this->get_delay_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
			L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0067;
			}
		}

IL_002b:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = V_2;
			__this->set_U3CU3Eu__1_5(L_8);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F_m3A2BD0D75DFC36AF14216AC33A03CDF3C4A56A5F_RuntimeMethod_var);
			goto IL_00b0;
		}

IL_004b:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = __this->get_U3CU3Eu__1_5();
			V_2 = L_10;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_11 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0067:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// pinArrayManager.serialPinArray.Write(s);
			canvasManager_t4FBCD25E314A3FABF9252328E147B69CE86DDE5F * L_13 = V_1;
			NullCheck(L_13);
			pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * L_14 = L_13->get_pinArrayManager_18();
			NullCheck(L_14);
			SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_15 = L_14->get_serialPinArray_6();
			String_t* L_16 = __this->get_s_4();
			NullCheck(L_15);
			SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_15, L_16, /*hidden argument*/NULL);
			goto IL_009d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	} // end catch (depth: 1)

IL_009d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_MoveNext_m9FC0FDD834EF3120CE5DE1B21D8A27C4E47636F3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * _thisAdjusted = reinterpret_cast<U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F *>(__this + _offset);
	U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_MoveNext_m9FC0FDD834EF3120CE5DE1B21D8A27C4E47636F3(_thisAdjusted, method);
}
// System.Void canvasManager/<<Update>g__drivePin|17_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_SetStateMachine_mF20E3CA308030DF8D0A8C86F58BFEC5057E56802 (U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_SetStateMachine_mF20E3CA308030DF8D0A8C86F58BFEC5057E56802_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F * _thisAdjusted = reinterpret_cast<U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_t3170E991CD95C43E51B81941139B25A931A0203F *>(__this + _offset);
	U3CU3CUpdateU3Eg__drivePinU7C17_0U3Ed_SetStateMachine_mF20E3CA308030DF8D0A8C86F58BFEC5057E56802(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ex2canvasManager/<<Update>g__drivePin|14_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_MoveNext_m28FD3535AD7DBC4C4C5A35FCC7B3346933B5A775 (U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b;
			}
		}

IL_0011:
		{
			// await Task.Delay(delay);
			int32_t L_3 = __this->get_delay_2();
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
			L_4 = Task_Delay_mD54722DBAF22507493263E9B1167A7F77EDDF80E(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_5;
			L_5 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0067;
			}
		}

IL_002b:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = V_2;
			__this->set_U3CU3Eu__1_5(L_8);
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_9, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE_mE24321CA9A65AEE847E6093B9235D3F42167472E_RuntimeMethod_var);
			goto IL_00b0;
		}

IL_004b:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10 = __this->get_U3CU3Eu__1_5();
			V_2 = L_10;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_11 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0067:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// pinArrayManager.serialPinArray.Write(s);
			ex2canvasManager_t5D74C5EADA6F6FFFB922E8A5E9061C5725E60705 * L_13 = V_1;
			NullCheck(L_13);
			pinArrayManager_t6A1466CDB3E4782CB43DA346DFA8361743A3B7AD * L_14 = L_13->get_pinArrayManager_15();
			NullCheck(L_14);
			SerialPort_t5D73BA87CC158EE8FE4468BE295A6F8EE674F636 * L_15 = L_14->get_serialPinArray_6();
			String_t* L_16 = __this->get_s_4();
			NullCheck(L_15);
			SerialPort_Write_mECAFF3087D6028991DD52C63A415EFD20FAC7286(L_15, L_16, /*hidden argument*/NULL);
			goto IL_009d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	} // end catch (depth: 1)

IL_009d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_19, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_MoveNext_m28FD3535AD7DBC4C4C5A35FCC7B3346933B5A775_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * _thisAdjusted = reinterpret_cast<U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE *>(__this + _offset);
	U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_MoveNext_m28FD3535AD7DBC4C4C5A35FCC7B3346933B5A775(_thisAdjusted, method);
}
// System.Void ex2canvasManager/<<Update>g__drivePin|14_0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_SetStateMachine_mD46894470D3D057651E783A4735A7AC0037B4DBF (U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m1ED99BE03B146D8A7117E299EBA5D74999EB52D7((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_SetStateMachine_mD46894470D3D057651E783A4735A7AC0037B4DBF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE * _thisAdjusted = reinterpret_cast<U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_t14E66FB46E67FE776A0348DE329B89B313C2C2AE *>(__this + _offset);
	U3CU3CUpdateU3Eg__drivePinU7C14_0U3Ed_SetStateMachine_mD46894470D3D057651E783A4735A7AC0037B4DBF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C_inline (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method)
{
	{
		// return m_Text;
		String_t* L_0 = __this->get_m_Text_38();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
