//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef SKOverlay_TwitterAdFormats_h
#define SKOverlay_TwitterAdFormats_h
@import Foundation;

@interface SKOverlay (TwitterAdFormats)

/* class methods */
+ (void)dismissWithAppIdentifier:(id)identifier presentationContext:(long long)context;

/* instance methods */
- (id)initWithAppIdentifier:(id)identifier position:(long long)position presentingViewController:(id)controller adMetadataContainer:(id)container appStoreOverlayDelegate:(id)delegate skAdNetwork4Enabled:(_Bool)enabled;

@end

#endif /* SKOverlay_TwitterAdFormats_h */
