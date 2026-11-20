//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift33CollectionViewDelegateBroadcaster_h
#define _TtC10TFNUISwift33CollectionViewDelegateBroadcaster_h
@import Foundation;

#include "TFNScrollViewDelegateBroadcaster.h"
#include "UICollectionViewDelegate-Protocol.h"

@interface TFNUISwift.CollectionViewDelegateBroadcaster : TFNScrollViewDelegateBroadcaster <UICollectionViewDelegate> // (Swift)

/* instance methods */
- (id)initWithPrimaryDelegate:(id)delegate;
- (id)init;

@end

#endif /* _TtC10TFNUISwift33CollectionViewDelegateBroadcaster_h */
