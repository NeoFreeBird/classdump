//
#ifndef ONBSearchViewDelegate_Protocol_h
#define ONBSearchViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSearchViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)searchView:(id)view didChangeText:(id)text;
- (void)searchViewDidStartEditing:(id)editing;
- (void)searchViewDidEndEditing:(id)editing;
- (void)searchView:(id)view didReturn:(id)_return;
- (void)searchViewDidCancel:(id)cancel;

@end

#endif /* ONBSearchViewDelegate_Protocol_h */
