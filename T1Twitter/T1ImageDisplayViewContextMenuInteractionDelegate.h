//
#ifndef T1ImageDisplayViewContextMenuInteractionDelegate_h
#define T1ImageDisplayViewContextMenuInteractionDelegate_h
@import Foundation;

#include "T1ImageDisplayView.h"
#include "UIContextMenuInteractionDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1ImageDisplayViewContextMenuInteractionDelegate : NSObject <UIContextMenuInteractionDelegate> {
    /* instance variables */
    T1ImageDisplayView *_owner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOwner:(id)owner;
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;

@end

#endif /* T1ImageDisplayViewContextMenuInteractionDelegate_h */
