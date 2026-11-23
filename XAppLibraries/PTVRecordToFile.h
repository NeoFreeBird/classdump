//
#ifndef PTVRecordToFile_h
#define PTVRecordToFile_h
@import Foundation;

#include "PTVFileRecordDelegate-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, NSDate, NSMutableArray, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface PTVRecordToFile : NSObject {
    /* instance variables */
    NSMutableArray *_clips;
    NSMutableArray *_clipDurations;
    NSURL *_currentURL;
    AVAssetWriterInput *_recordingVideo;
    AVAssetWriterInput *_recordingAudio;
    struct opaqueCMFormatDescription * _audioEncoderFormat;
    struct opaqueCMBufferQueue * _audioBuffers;
    struct opaqueCMBufferQueue * _videoBuffers;
    NSObject<OS_dispatch_queue> *_recordingQueue;
    _Bool _firstAudio;
    _Bool _firstVideo;
    NSDate *_spaceCheck;
    _Bool _startNewClip;
    _Bool _flushWhileWaiting;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastVideoTimestampSaved;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstAudioTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstVideoTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _localVideoStartPresentationTimestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _localVideoRecordingTimeTick;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _localVideoRecordingTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _totalFinalisedDuration;
}

@property _Bool isRecording;
@property (retain, nonatomic) AVAssetWriter *localRecording;
@property (weak) id <PTVFileRecordDelegate> delegate;
@property double freeSpaceLimitinMB;
@property _Bool hasAudio;
@property _Bool hasVideo;
@property _Bool isHEVCEnabled;
@property int audioFrequency;
@property _Bool cropAudioToVideo;

/* class methods */
+ (void)combineClips:(id)clips saveToCameraRoll:(id /* block */)roll;
+ (_Bool)combineClips:(id)clips output:(id)output onCompletion:(id /* block */)completion;
+ (id)clipsFolder;
+ (void)emptyClipsFolder;
+ (id)discoveredClips;
+ (void)recoverOrphanedClips;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)setAudioEncoderFormat:(struct opaqueCMFormatDescription *)format;
- (void)startRecording;
- (void)pauseRecording;
- (void)finishRecordingWithCompletionHandler:(id /* block */)handler;
- (void)writeRecording:(id)recording sample:(struct opaqueCMSampleBuffer *)sample toVideo:(_Bool)video time:(double)time decode:(double)decode;
- (void)startNewClipWithFlush:(_Bool)flush;
- (void)createRecorder:(struct { long long x0; int x1; unsigned int x2; long long x3; })recorder;
- (_Bool)checkVideoForIDR:(id)idr;
- (void)finishClipWithCompletionHandler:(id /* block */)handler;
- (id)appendClipURL:(id)url duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)currentClipURLs;
- (id)removeLastSavedClip;
- (_Bool)checkFreeSpace;
- (double)getFreeSpaceInMB;
- (_Bool)hasEmptyRecording;
- (void)doWriteRecording:(id)recording sample:(struct opaqueCMSampleBuffer *)sample toVideo:(_Bool)video time:(double)time decode:(double)decode;
- (_Bool)feedQueue:(id)queue isVideo:(_Bool)video;
- (void)append:(struct opaqueCMSampleBuffer *)append toInput:(id)input isVideo:(_Bool)video;
- (void)flushAudioPriorTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })to;
- (void)syncFlushAudioPriorTo:(struct { long long x0; int x1; unsigned int x2; long long x3; })to;
- (double)videoDuration;
- (double)totalRecordedDuration;
- (_Bool)canSaveToCameraRoll;
- (void)deleteSavedClips;

@end

#endif /* PTVRecordToFile_h */
