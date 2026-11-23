//
#ifndef T1GapDataViewAdapterDelegate_Protocol_h
#define T1GapDataViewAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1GapDataViewAdapterDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)gapItemWasSelected:(id)selected;
- (id)gapItemLabel:(id)label;
- (_Bool)gapItemIsLoading:(id)loading;

@end

#endif /* T1GapDataViewAdapterDelegate_Protocol_h */
