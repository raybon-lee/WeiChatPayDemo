

#import <Foundation/Foundation.h>
#import "WXUtil.h"
#import "ApiXml.h"

//更改商户把相关参数后可测试
//APPID
#define APP_ID          @"wx2be937c56f9f3faf"


//appsecret
#define APP_SECRET      @"d56c26fea525e5761830fb57d19adffd"


//商户号，填写商户对应参数
#define MCH_ID          @"1261441801"



//商户API密钥，填写相应参数
#define PARTNER_ID      @"0891c9c2015b96bb7962129df6689111"


//支付结果回调页面
#define NOTIFY_URL      @"http://wxpay.weixin.qq.com/pub_v2/pay/notify.v2.php"


//获取服务器端支付数据地址（商户自定义）
#define SP_URL          @"http://wxpay.weixin.qq.com/pub_v2/app/app_pay.php"


@interface payRequsestHandler : NSObject{
	//预支付网关url地址
    NSString *payUrl;

    //lash_errcode;
    long     last_errcode;
	//debug信息
    NSMutableString *debugInfo;
    NSString *appid,*mchid,*spkey;
}
//初始化函数
-(BOOL) init:(NSString *)app_id mch_id:(NSString *)mch_id;
-(NSString *) getDebugifo;
-(long) getLasterrCode;
//设置商户密钥
-(void) setKey:(NSString *)key;
//创建package签名
-(NSString*) createMd5Sign:(NSMutableDictionary*)dict;
//获取package带参数的签名包
-(NSString *)genPackage:(NSMutableDictionary*)packageParams;
//提交预支付
-(NSString *)sendPrepay:(NSMutableDictionary *)prePayParams;
//签名实例测试
- ( NSMutableDictionary *)sendPay_demo;

@end