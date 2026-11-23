//
#ifndef TFNTokenEntryLink_h
#define TFNTokenEntryLink_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTokenEntryLink : NSObject

@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned long long entryIndex;

/* instance methods */
- (id)initWithToken:(id)token entryIndex:(unsigned long long)index;
- (long long)compare:(id)compare;

@end

#endif /* TFNTokenEntryLink_h */
