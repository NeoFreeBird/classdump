//
#ifndef _TtC14T1TwitterSwiftP33_05EE89EEE0D6A00BE4B10D0D05E5827B32T1VideoDownloadProgressForwarder_h
#define _TtC14T1TwitterSwiftP33_05EE89EEE0D6A00BE4B10D0D05E5827B32T1VideoDownloadProgressForwarder_h
@import Foundation;

#include "TNUSimpleDownloadDelegate-Protocol.h"

@class NSObject;

@interface T1TwitterSwift.(T1VideoDownloadProgressForwarder in _05EE89EEE0D6A00BE4B10D0D05E5827B) : NSObject <TNUSimpleDownloadDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *download;
    NSNumber"16@0:8 *onProgress;
}

/* instance methods */
- (void)download:(id)download didUpdateProgress:(float)progress;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_05EE89EEE0D6A00BE4B10D0D05E5827B32T1VideoDownloadProgressForwarder_h */
