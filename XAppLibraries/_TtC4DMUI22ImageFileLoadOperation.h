//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMUI22ImageFileLoadOperation_h
#define _TtC4DMUI22ImageFileLoadOperation_h
@import Foundation;

@class DMUI.ImageFileLoadOperationRequest, NSOperation, _$sySo7UIImageCSgc;

@interface DMUI.ImageFileLoadOperation : NSOperation { // (Swift)
    /* instance variables */
    DMUI.ImageFileLoadOperationRequest request;
    (__C.UIImage?) -> () callback;
}

/* instance methods */
- (void)main;
- (id)init;

@end

#endif /* _TtC4DMUI22ImageFileLoadOperation_h */
