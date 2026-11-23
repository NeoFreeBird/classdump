//
#ifndef _TtC14CallScheduleUI21BookingLinkFormWorker_h
#define _TtC14CallScheduleUI21BookingLinkFormWorker_h
@import Foundation;

@class CallModels.BookingLinksRepositoryProtocol, CallScheduleUI.BookingLinkFormStream, _$s11XFoundation11AsyncWorkerCN;

@interface CallScheduleUI.BookingLinkFormWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallScheduleUI.BookingLinkFormStream bookingLinkFormStream;
    CallModels.BookingLinksRepositoryProtocol repository;
}

@end

#endif /* _TtC14CallScheduleUI21BookingLinkFormWorker_h */
