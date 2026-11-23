//
#ifndef NSStream_NOZAdditions_h
#define NSStream_NOZAdditions_h
@import Foundation;

@interface NSStream (NOZAdditions)

/* class methods */
+ (void)noz_createBoundInputStream:(id *)stream outputStream:(id *)stream bufferSize:(unsigned long long)size;

@end

#endif /* NSStream_NOZAdditions_h */
