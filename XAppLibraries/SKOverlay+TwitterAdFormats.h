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
