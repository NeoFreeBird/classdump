//
#ifndef T1TweetSelectionDelegate_Protocol_h
#define T1TweetSelectionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TweetSelectionDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)itemIsSelected:(id)selected atIndexPath:(id)path;
- (_Bool)shouldSelectItem:(id)item atIndexPath:(id)path;
- (void)selectedItem:(id)item atIndexPath:(id)path;
- (void)deselectedItem:(id)item atIndexPath:(id)path;
- (void)configureView:(id)view forItem:(id)item atIndexPath:(id)path;

@optional

@end

#endif /* T1TweetSelectionDelegate_Protocol_h */
