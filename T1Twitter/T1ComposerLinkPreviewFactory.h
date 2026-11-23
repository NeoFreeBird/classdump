//
#ifndef T1ComposerLinkPreviewFactory_h
#define T1ComposerLinkPreviewFactory_h
@import Foundation;

@class NSObject;

@interface T1ComposerLinkPreviewFactory : NSObject // (Swift)

/* class methods */
+ (id)makeCoordinatorWithAccount:(id)account openGraphProvider:(id)provider isJetfuelEnabled:(_Bool)enabled parentViewController:(id)controller contentWidth:(id /* block */)width;

/* instance methods */
- (id)init;

@end

#endif /* T1ComposerLinkPreviewFactory_h */
