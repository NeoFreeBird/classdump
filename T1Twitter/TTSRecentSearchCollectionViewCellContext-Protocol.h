//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSRecentSearchCollectionViewCellContext_Protocol_h
#define TTSRecentSearchCollectionViewCellContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@protocol TTSRecentSearchCollectionViewCellContext <NSObject>

@required

@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;

/* required instance methods */
- (id)badgeImageForUser:(id)user fittingSize:(struct CGSize { double x0; double x1; })size onDark:(_Bool)dark;

@optional

@end

#endif /* TTSRecentSearchCollectionViewCellContext_Protocol_h */
