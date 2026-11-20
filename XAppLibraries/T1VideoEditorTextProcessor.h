//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VideoEditorTextProcessor_h
#define T1VideoEditorTextProcessor_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAVTVideoFilter-Protocol.h"
#include "TAVTVideoFilterMediaMetadata-Protocol.h"
#include "TAVTVideoFilterTask-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSObject;

@interface T1VideoEditorTextProcessor : NSObject <UIGestureRecognizerDelegate, TAVTVideoFilter, TAVTVideoFilterTask, TAVTVideoFilterMediaMetadata, NSCoding, NSSecureCoding, NSCopying> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 _input;
    @40@0:8:16@24@32 _output;
    @40@0:8:16@24@32 _tweetBackgroundProcessor;
    @40@0:8:16@24@32 _textComposer;
    @40@0:8:16@24@32 _gestureController;
    @40@0:8:16@24@32 _cancellables;
    @40@0:8:16@24@32 _setNeedsRedrawLastFrameSubject;
    @40@0:8:16@24@32 _textMagnifierCoefficientSubject;
    @40@0:8:16@24@32 currentTextColoring;
    @40@0:8:16@24@32 _currentTextFontSubject;
    @40@0:8:16@24@32 _currentGeometrySubject;
    @40@0:8:16@24@32 id;
    @40@0:8:16@24@32 videoOrientation;
    @40@0:8:16@24@32 rendersIntoTranscoderOutput;
}

@property (nonatomic, readonly) long long framesToBuffer;
@property (nonatomic, readonly) NSDictionary *mediaMetadata;
@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)scheduleProcessingOfFrameWithPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp input:(struct __CVBuffer *)input output:(struct __CVBuffer *)output error:(id *)error;
- (struct __CVBuffer *)waitUntilCompletedAndReturnError:(id *)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (id)init;

@end

#endif /* T1VideoEditorTextProcessor_h */
