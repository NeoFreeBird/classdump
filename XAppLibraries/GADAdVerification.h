//
#ifndef GADAdVerification_h
#define GADAdVerification_h
@import Foundation;

#include "GADOMIDPartner.h"

@class NSObject, NSString;

@interface GADAdVerification : NSObject

@property (readonly, nonatomic) NSString *OMIDVersion;
@property (retain, nonatomic) GADOMIDPartner *partner;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)javaScriptSessionServiceForWebViewController:(id)controller adType:(id)type;
- (id)adSessionForWebViewController:(id)controller mediaType:(long long)type contentURL:(id)url impressionType:(unsigned long long)type adType:(id)type;
- (id)adEventsForSession:(id)session;

@end

#endif /* GADAdVerification_h */
