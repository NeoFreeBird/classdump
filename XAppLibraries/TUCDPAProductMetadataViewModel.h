//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDPAProductMetadataViewModel_h
#define TUCDPAProductMetadataViewModel_h
@import Foundation;

#include "TUCDPAProductMetadata.h"

@class NSMutableAttributedString, NSObject;

@interface TUCDPAProductMetadataViewModel : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 fontSize;
}

@property (nonatomic, readonly) TUCDPAProductMetadata *model;
@property (nonatomic, readonly) NSMutableAttributedString *priceAttributedString;

/* instance methods */
- (id)initWithModel:(id)model;
- (id)init;

@end

#endif /* TUCDPAProductMetadataViewModel_h */
