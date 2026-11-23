//
#ifndef TFNPickableItem_h
#define TFNPickableItem_h
@import Foundation;

#include "TFNPickableValue-Protocol.h"

@class NSObject, NSString;

@interface TFNPickableItem : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) id /* block */ updateAction;
@property (readonly, nonatomic) _Bool canToggleSelection;
@property (nonatomic) _Bool picked;
@property (nonatomic) _Bool beingPickedAsNextItem;
@property (readonly, nonatomic) id <TFNPickableValue> pickableValue;
@property (readonly, nonatomic) _Bool pickable;

/* class methods */
+ (id)itemForValue:(id)value inPicker:(id)picker pickable:(_Bool)pickable canToggleSelection:(_Bool)selection;

/* instance methods */
- (_Bool)isPicked;
- (_Bool)isBeingPickedAsNextItem;
- (_Bool)isPickable;

@end

#endif /* TFNPickableItem_h */
