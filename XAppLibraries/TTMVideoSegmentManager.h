//
#ifndef TTMVideoSegmentManager_h
#define TTMVideoSegmentManager_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TTMVideoSegmentWriter.h"
#include "TTMVideoSegmentWriterDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, NSURL, TFSReferencedFile;
@protocol OS_dispatch_queue, TTMVideoSegmentManagerDelegate;

@interface TTMVideoSegmentManager : NSObject <TTMVideoSegmentWriterDelegate, NSCoding>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *segments;
@property (readonly, nonatomic) TFSReferencedFile *referencedMovieDirectory;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxRecordingInterval;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minRecordingInterval;
@property (nonatomic) long long currentDevicePosition;
@property (nonatomic) long long currentVideoOrientation;
@property (nonatomic) long long movieVideoOrientation;
@property (nonatomic) long long savedMovieVideoOrientation;
@property (retain, nonatomic) NSArray *savedSegments;
@property (retain, nonatomic) TTMVideoSegmentWriter *segmentWriter;
@property (nonatomic) long long status;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } totalRecordedSegmentsInterval;
@property (nonatomic) _Bool useAudio;
@property (weak, nonatomic) id <TTMVideoSegmentManagerDelegate> delegate;
@property (readonly, nonatomic) NSURL *movieDirectoryURL;
@property (readonly, nonatomic) _Bool hasChanges;
@property (nonatomic) long long lockOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithMaxRecordingInterval:(double)interval;
- (id)initWithCoder:(id)coder;
- (void)_commonInit;
- (void)encodeWithCoder:(id)coder;
- (void)startRecording;
- (void)stopRecording;
- (void)segmentsWithCompletion:(id /* block */)completion;
- (void)exportMovieWithCompletion:(id /* block */)completion;
- (void)checkpoint;
- (void)rollback;
- (void)segmentWriterWillStartRecording:(id)recording;
- (void)segmentWriterDidStartRecording:(id)recording;
- (void)segmentWriterWillStopRecording:(id)recording;
- (void)segmentWriterDidStopRecording:(id)recording;
- (void)segmentWriter:(id)writer didFailWithError:(id)error;
- (void)segmentWriter:(id)writer didRecordInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval;
- (void)_setSegments:(id)segments;
- (void)_createMovieDirectory;

@end

#endif /* TTMVideoSegmentManager_h */
