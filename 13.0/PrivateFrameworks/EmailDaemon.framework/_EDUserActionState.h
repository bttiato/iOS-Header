//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol ECMessage;

@interface _EDUserActionState : NSObject
{
    _Bool _scrolledToEnd;
    _Bool _mutedThread;
    NSDate *_viewingStarted;
    id <ECMessage> _message;
    NSString *_key;
    NSString *_cellStyle;
    NSString *_messageListType;
    long long _row;
}

@property(nonatomic) long long row; // @synthesize row=_row;
@property(copy, nonatomic) NSString *messageListType; // @synthesize messageListType=_messageListType;
@property(copy, nonatomic) NSString *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) _Bool mutedThread; // @synthesize mutedThread=_mutedThread;
@property(nonatomic) _Bool scrolledToEnd; // @synthesize scrolledToEnd=_scrolledToEnd;
@property(retain, nonatomic) id <ECMessage> message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *viewingStarted; // @synthesize viewingStarted=_viewingStarted;
- (void).cxx_destruct;

@end

