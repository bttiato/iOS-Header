//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/NSObject-Protocol.h>

@class NUIBoxArrangement;
@protocol NUIArrangementItem;

@protocol NUIBoxArrangementDataSource <NSObject>
- (id <NUIArrangementItem>)boxArrangement:(NUIBoxArrangement *)arg1 itemAtIndex:(long long)arg2 horizontalAlignment:(long long *)arg3 verticalAlignment:(long long *)arg4;
- (long long)numberOfItemsInBoxArrangement:(NUIBoxArrangement *)arg1;
@end

