//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokImagineSessionCompleteReasonUpsell_h
#define GrokImagineSessionCompleteReasonUpsell_h
@import Foundation;

@class NSObject, NSString;

@interface GrokImagineSessionCompleteReasonUpsell : NSObject // (Swift)

@property (nonatomic, readonly) NSString *premiumReferringPage;
@property (nonatomic, readonly) NSString *paywallThresholdTier;

/* instance methods */
- (id)init;

@end

#endif /* GrokImagineSessionCompleteReasonUpsell_h */
