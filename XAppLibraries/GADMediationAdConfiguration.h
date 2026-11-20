//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMediationAdConfiguration_h
#define GADMediationAdConfiguration_h
@import Foundation;

#include "GADAdNetworkExtras-Protocol.h"
#include "GADMediationCredentials.h"
#include "GADRootViewControllerProvider.h"
#include "GADTargeting.h"

@class NSData, NSDictionary, NSObject, NSString, UIViewController;

@interface GADMediationAdConfiguration : NSObject {
    /* instance variables */
    NSDictionary *_adConfiguration;
    GADTargeting *_targeting;
}

@property (retain, nonatomic) GADRootViewControllerProvider *viewControllerProvider;
@property (readonly, nonatomic) NSString *bidResponse;
@property (readonly, nonatomic) UIViewController *topViewController;
@property (readonly, nonatomic) GADMediationCredentials *credentials;
@property (readonly, nonatomic) NSData *watermark;
@property (readonly, nonatomic) id <GADAdNetworkExtras> extras;
@property (readonly, nonatomic) _Bool isTestRequest;

/* instance methods */
- (id)initWithAdConfiguration:(id)configuration targeting:(id)targeting credentials:(id)credentials extras:(id)extras;

@end

#endif /* GADMediationAdConfiguration_h */
