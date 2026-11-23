//
#ifndef TFNActionItemActivityAdapter_h
#define TFNActionItemActivityAdapter_h
@import Foundation;

#include "TFNActionItem.h"

@class UIActivity;

@interface TFNActionItemActivityAdapter : UIActivity {
    /* instance variables */
    TFNActionItem *_actionItem;
}

/* instance methods */
- (id)initWithActionItem:(id)item;
- (id)activityType;
- (id)activityTitle;
- (id)activityImage;
- (_Bool)canPerformWithActivityItems:(id)items;
- (void)performActivity;

@end

#endif /* TFNActionItemActivityAdapter_h */
