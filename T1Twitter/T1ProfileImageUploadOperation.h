//
#ifndef T1ProfileImageUploadOperation_h
#define T1ProfileImageUploadOperation_h
@import Foundation;

@class NSDate, NSError, NSString, NSURL, TFNTwitterAccount, TFNTwitterMediaImagePipeline, TFSDependentConcurrentOperation, TFSPendingStateToken, TTMAssetImage, UIImage;

@interface T1ProfileImageUploadOperation : TFSDependentConcurrentOperation {
    /* instance variables */
    struct { unsigned int didOverride:1; unsigned int didSucceed:1; unsigned int didEncounterFailure:1; unsigned int didStart:1; } _flags;
    NSError *_uploadError;
    unsigned long long _executionSteps;
    unsigned long long _nextStep;
}

@property (copy, nonatomic) NSString *uploadImageTempFilePath;
@property (copy, nonatomic) NSString *originalMediaHash;
@property (readonly, nonatomic) TFNTwitterMediaImagePipeline *pipeline;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) UIImage *uploadImage;
@property (readonly, nonatomic) TTMAssetImage *uploadImageAsset;
@property (readonly, nonatomic) NSURL *uploadImageAssetURL;
@property (readonly, nonatomic) NSString *legacyPendingStateToken;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) TFSPendingStateToken *pendingStateToken;
@property (readonly, copy, nonatomic) id /* block */ successCompletion;
@property (readonly, nonatomic) _Bool didSucceed;

/* class methods */
+ (unsigned long long)executionSteps;

/* instance methods */
- (id)initWithImage:(id)image type:(unsigned long long)type account:(id)account identifier:(id)identifier completion:(id /* block */)completion;
- (void)run;
- (void)cancel;
- (_Bool)didEncounterFailure;
- (void)_triggerFailure;
- (void)_finish:(_Bool)_finish;
- (void)_completeCurrentStep:(id /* block */)step;
- (void)_executeNextStep;
- (void)executeStep:(unsigned long long)step;
- (void)_cleanup;
- (void)_overrideImage;
- (void)_continueOverridingImageAfterWritingImageToLocalImageCache;
- (void)_cancelOverrides;
- (void)_writeUploadImageToTempFile;
- (void)_uploadImage;
- (void)_completeUpload;
- (void)_t1_presentAlertController:(id)controller retryCount:(long long)count failureBlock:(id /* block */)block;
- (void)_t1_updateImage:(unsigned long long)image imageFile:(id)file imageSize:(struct CGSize { double x0; double x1; })size responseBlock:(id /* block */)block;
- (void)_t1_requestForcedUserRefreshAndCompleteOperation;
- (void)_t1_scribePerfProcessingEvent;
- (void)_t1_scribePerfFullEvent;

@end

#endif /* T1ProfileImageUploadOperation_h */
