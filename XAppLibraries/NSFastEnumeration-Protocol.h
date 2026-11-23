//
#ifndef NSFastEnumeration_Protocol_h
#define NSFastEnumeration_Protocol_h
@import Foundation;

@protocol NSFastEnumeration

@required

/* required instance methods */
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)state objects:(id *)objects count:(unsigned long long)count;

@optional

@end

#endif /* NSFastEnumeration_Protocol_h */
