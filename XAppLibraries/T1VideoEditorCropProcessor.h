//
#ifndef T1VideoEditorCropProcessor_h
#define T1VideoEditorCropProcessor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TAVTVideoFilter-Protocol.h"
#include "TAVTVideoFilterMediaMetadata-Protocol.h"
#include "TAVTVideoFilterTask-Protocol.h"

@class NSDictionary, NSObject;

@interface T1VideoEditorCropProcessor : NSObject <TAVTVideoFilter, TAVTVideoFilterTask, TAVTVideoFilterMediaMetadata, NSSecureCoding, NSCopying> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 cropSize;
    @40@0:8:16@24@32 hasGestureEdits;
    @40@0:8:16@24@32 hasStackedTopGestureEdits;
    @40@0:8:16@24@32 _tweetBackgroundProcessor;
    @40@0:8:16@24@32 _gestureController;
    @40@0:8:16@24@32 _setNeedsRedrawLastFrameSubject;
    @40@0:8:16@24@32 _cropSizeSubject;
    @40@0:8:16@24@32 _backgroundFillSubject;
    @40@0:8:16@24@32 _cancellables;
    @40@0:8:16@24@32 _input;
    @40@0:8:16@24@32 _output;
    @40@0:8:16@24@32 _currentGeometry;
    @40@0:8:16@24@32 _currentStackedTopGeometry;
    @40@0:8:16@24@32 _tabRestoreGeometries;
    @40@0:8:16@24@32 _guidesRequested;
    @40@0:8:16@24@32 _appliedGeometryViewPortSize;
    @40@0:8:16@24@32 _didApplyDefaultScale;
    @40@0:8:16@24@32 _fadeFramingLimit;
    @40@0:8:16@24@32 id;
    @40@0:8:16@24@32 videoOrientation;
    @40@0:8:16@24@32 rendersIntoTranscoderOutput;
}

@property (nonatomic, readonly) NSDictionary *mediaMetadata;
@property (nonatomic, readonly) long long framesToBuffer;
@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (struct CGSize { double x0; double x1; })outputSizeForInputSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })outputDimensionsForSourceDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)scheduleProcessingOfFrameWithPresentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })stamp input:(struct __CVBuffer *)input output:(struct __CVBuffer *)output error:(id *)error;
- (struct __CVBuffer *)waitUntilCompletedAndReturnError:(id *)error;
- (id)copyWithZone:(void *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;

@end

#endif /* T1VideoEditorCropProcessor_h */
