//
//  GNOneSignalHeader.h
//  OneSignalPlugin
//
//  Created by bld ai on 2/20/22.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "GNRegistrationHeader.h"

@interface GNOneSignalHeader : NSObject
- (void)presentAlert:(UIAlertController*)alert;
- (void)setInitialUrl:(NSURL *)url; // for initial launch from push notification
- (void)runGonativeInfoWithCallback:(NSString*)callback additionalData:(NSDictionary*)additionalData;
- (void)runJavascriptWithCallback:(id)callback data:(NSDictionary*)data;

@property WKWebView *wkWebview;
@property GNRegistrationHeader *registration;
@end
