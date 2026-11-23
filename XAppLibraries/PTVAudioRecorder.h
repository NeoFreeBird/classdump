//
#ifndef PTVAudioRecorder_h
#define PTVAudioRecorder_h
@import Foundation;

#include "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#include "PTVAudioTranscriber.h"
#include "PTVAudioTranscriberDelegate-Protocol.h"
#include "PTVPhoneCallObserver-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, AVCaptureSession, NSDate, NSDictionary, NSLocale, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, PTVAudioRecorderDelegate;

@interface PTVAudioRecorder : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, PTVPhoneCallObserver, PTVAudioTranscriberDelegate>

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (retain, nonatomic) NSMutableArray *transcribers;
@property (retain, nonatomic) PTVAudioTranscriber *currentTranscriber;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (nonatomic) _Bool paused;
@property (nonatomic) unsigned long long numberOfClips;
@property (nonatomic) double clipDuration;
@property (nonatomic) double overallDuration;
@property (retain, nonatomic) NSDate *sessionStartDate;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } sessionLastPresentationTimeStamp;
@property (weak, nonatomic) id <PTVAudioRecorderDelegate> delegate;
@property (readonly, nonatomic) double maximumNumberOfClips;
@property (readonly, nonatomic) double clipMaximumDurationSeconds;
@property (copy, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic) NSLocale *transcriptionLocale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithMaximumNumberOfClips:(unsigned long long)clips clipMaximumDurationSeconds:(double)seconds transcriptionLocale:(id)locale;
- (void)startOrResumeRecording;
- (void)pauseRecording;
- (void)endRecording;
- (void)cancelRecording;
- (_Bool)canStartNewClip;
- (void)startNewClip;
- (void)captureOutput:(id)output didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)buffer fromConnection:(id)connection;
- (void)audioTranscriber:(id)transcriber didFinishWithTranscription:(id)transcription;
- (void)phoneCallMonitorDidReceiveIncomingPhoneCall:(id)call;
- (void)phoneCallMonitorDidAcceptIncomingPhoneCall:(id)call;
- (void)_ptv_createTranscriber;
- (void)_ptv_createAssetWriter;
- (_Bool)_ptv_createCaptureSession;
- (void)_ptv_saveDurations;
- (_Bool)isPaused;

@end

#endif /* PTVAudioRecorder_h */
