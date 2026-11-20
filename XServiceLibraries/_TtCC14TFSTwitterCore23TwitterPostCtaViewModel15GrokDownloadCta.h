//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14TFSTwitterCore23TwitterPostCtaViewModel15GrokDownloadCta_h
#define _TtCC14TFSTwitterCore23TwitterPostCtaViewModel15GrokDownloadCta_h
@import Foundation;

#include "TFSURTRichText.h"

@class GraphQLScalars.ProfileImageShape ?, NSObject, NSString, Swift.Bool, TFSURTCore.URTRichText, TFSURTCore.URTRichText ?, _$sSS, _$sSSSg;

@interface TFSTwitterCore.TwitterPostCtaViewModel.GrokDownloadCta : NSObject { // (Swift)
    /* instance variables */
    GraphQLScalars.ProfileImageShape ? iconProfileImageShape;
}

@property (nonatomic, readonly) TFSURTRichText *titleText;
@property (nonatomic, readonly) TFSURTRichText *titleTextAlreadyInstalled;
@property (nonatomic, readonly) TFSURTRichText *actionText;
@property (nonatomic, readonly) TFSURTRichText *actionTextAlreadyInstalled;
@property (nonatomic, readonly) NSString *actionUrl;
@property (nonatomic, readonly) NSString *actionUrlAlreadyInstalled;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) NSString *strokeColor;
@property (nonatomic, readonly) _Bool showChevron;
@property (nonatomic, readonly) NSString *iconImageUrl;
@property (nonatomic, readonly) _Bool isGrokVariant;

/* instance methods */
- (id)init;

@end

#endif /* _TtCC14TFSTwitterCore23TwitterPostCtaViewModel15GrokDownloadCta_h */
