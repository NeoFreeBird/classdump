//
#ifndef ONBAPIFormFieldValidator_h
#define ONBAPIFormFieldValidator_h
@import Foundation;

@class NSObject, NSString, TFNLegacyFormFieldValidity, TFSTimer;

@interface ONBAPIFormFieldValidator : NSObject {
    /* instance variables */
    NSString *_previousInput;
    double _localValidationDelay;
    TFNLegacyFormFieldValidity *_previousValidity;
    TFSTimer *_remoteValidationTimer;
    TFSTimer *_localValidationTimer;
}

/* class methods */
+ (id /* block */)validationBlock;
+ (id /* block */)validationBlockWithLocalDelay:(double)delay;
+ (id /* block */)validationBlockWithValidator:(id)validator;
+ (id /* block */)dataItemTextValidatorBlockWithValidator:(id)validator;

/* instance methods */
- (id)initWithLocalValidationDelay:(double)delay;
- (void)dealloc;
- (id)private_validityForFormField:(id)field editingState:(unsigned long long)state;
- (void)private_requestDelayedLocalValidationForFormField:(id)field;
- (void)private_requestDelayedRemoteValidationForFormField:(id)field;
- (void)private_requestRemoteValidationForTimer:(id)timer;
- (void)private_updateValidity:(id)validity forFormField:(id)field;
- (id)localValidityWithInput:(id)input;
- (id)remoteValidityWithResponseSuccess:(_Bool)success object:(id)object error:(id)error;
- (id)remoteValidityCommandWithInput:(id)input completionBlock:(id /* block */)block;

@end

#endif /* ONBAPIFormFieldValidator_h */
