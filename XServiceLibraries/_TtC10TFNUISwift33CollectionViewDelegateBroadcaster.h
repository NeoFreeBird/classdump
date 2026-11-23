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
