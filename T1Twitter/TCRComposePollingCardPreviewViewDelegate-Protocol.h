//
#ifndef TCRComposePollingCardPreviewViewDelegate_Protocol_h
#define TCRComposePollingCardPreviewViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRComposePollingCardPreviewViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)pollingCardPreviewView:(id)view didTapImageButtonForChoiceAtIndex:(unsigned long long)index;
- (void)pollingCardPreviewView:(id)view didTapTrashButtonForChoiceAtIndex:(unsigned long long)index;

@end

#endif /* TCRComposePollingCardPreviewViewDelegate_Protocol_h */
