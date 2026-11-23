//
#ifndef GADSignal_h
#define GADSignal_h
@import Foundation;

@class NSObject, NSString;

@interface GADSignal : NSObject

@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSString *signalString;

/* instance methods */
- (id)initWithSignalString:(id)string requestIdentifier:(id)identifier;

@end

#endif /* GADSignal_h */
