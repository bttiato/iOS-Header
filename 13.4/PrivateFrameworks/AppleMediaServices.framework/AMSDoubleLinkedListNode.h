//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedListNode : NSObject
{
    AMSDoubleLinkedListNode *_previous;
    id _object;
    AMSDoubleLinkedListNode *_next;
    NSString *_listIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property(retain, nonatomic) AMSDoubleLinkedListNode *next; // @synthesize next=_next;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(retain, nonatomic) AMSDoubleLinkedListNode *previous; // @synthesize previous=_previous;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

