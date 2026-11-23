//
#ifndef T1NetworkTrafficRecommendationValidator_h
#define T1NetworkTrafficRecommendationValidator_h
@import Foundation;

#include "T1NetworkTrafficRecommendationValidatorDelegate-Protocol.h"

@class NSArray, NSObject, NSOperationQueue, NSString;

@interface T1NetworkTrafficRecommendationValidator : NSObject {
    /* instance variables */
    NSOperationQueue *_nonNetworkingOperationQueue;
    NSArray *_pendingOperations;
}

@property (readonly, weak, nonatomic) id <T1NetworkTrafficRecommendationValidatorDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *probingRandomizationString;

/* instance methods */
- (id)initWithQueue:(id)queue probingRandomizationString:(id)string delegate:(id)delegate;
- (void)validateRecommendations:(id)recommendations;
- (void)cancelValidation;
- (id)_t1_generateValidationOperationWithURLStrings:(id)urlstrings validationCNOE:(id)cnoe preValidationOperation:(id)operation;
- (id)_t1_validateRewriteRecommendationOperations:(id)operations trafficMap:(id)map;
- (id)_t1_validatePredictionRecommendationOperations:(id)operations trafficMap:(id)map;
- (double)_t1_controlDurationFromValidationOperations:(id)operations controlURLString:(id)urlstring;
- (double)_t1_normalizedRequestDuration:(id)duration;

@end

#endif /* T1NetworkTrafficRecommendationValidator_h */
