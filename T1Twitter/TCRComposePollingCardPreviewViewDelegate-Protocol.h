//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
