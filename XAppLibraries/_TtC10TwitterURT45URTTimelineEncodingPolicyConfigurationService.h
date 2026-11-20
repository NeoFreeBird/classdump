//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT45URTTimelineEncodingPolicyConfigurationService_h
#define _TtC10TwitterURT45URTTimelineEncodingPolicyConfigurationService_h
@import Foundation;

@class TwitterURT.URTProfileTimelineRetentionPolicy, TwitterURT.URTTimelineEncodingPolicyConfigurationService.AccountTimelineEncodingPolicyStore, TwitterURT.URTTimelineEncodingPolicyConfigurationServiceModelContextProvider, _TtCs12_SwiftObject;

@interface TwitterURT.URTTimelineEncodingPolicyConfigurationService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterURT.URTTimelineEncodingPolicyConfigurationServiceModelContextProvider modelContextProvider;
    TwitterURT.URTTimelineEncodingPolicyConfigurationService.AccountTimelineEncodingPolicyStore policyStore;
    TwitterURT.URTProfileTimelineRetentionPolicy profileTimelineRetentionPolicy;
}

@end

#endif /* _TtC10TwitterURT45URTTimelineEncodingPolicyConfigurationService_h */
