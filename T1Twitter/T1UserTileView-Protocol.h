//
#ifndef T1UserTileView_Protocol_h
#define T1UserTileView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "T1UserViewModel-Protocol.h"

@protocol T1UserTileView <NSObject>

@required

@property (nonatomic) _Bool buttonSelected;
@property (retain, nonatomic) id <T1UserViewModel> viewModel;

/* required instance methods */
- (_Bool)isButtonSelected;

@optional

@end

#endif /* T1UserTileView_Protocol_h */
