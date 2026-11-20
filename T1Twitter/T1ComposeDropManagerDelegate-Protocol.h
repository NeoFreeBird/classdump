//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ComposeDropManagerDelegate_Protocol_h
#define T1ComposeDropManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ComposeDropManagerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)composeDropManager:(id)manager canHandleLocalDragSession:(id)session;
- (void)composeDropManager:(id)manager didDropAnimatedImage:(id)image;
- (void)composeDropManager:(id)manager didDropImages:(id)images;
- (void)composeDropManager:(id)manager didDropStatus:(id)status;
- (void)composeDropManager:(id)manager didDropURL:(id)url;
- (void)composeDropManager:(id)manager didDropText:(id)text;
- (void)composeDropManager:(id)manager didDropVideoFile:(id)file;
- (void)composeDropManager:(id)manager shouldUpdateDropIndicationViewHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)composeDropManager:(id)manager shouldUpdateDropIndicationViewText:(id)text backgroundStyle:(unsigned long long)style;

@end

#endif /* T1ComposeDropManagerDelegate_Protocol_h */
