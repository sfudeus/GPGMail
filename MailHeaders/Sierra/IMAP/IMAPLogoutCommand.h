//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@interface IMAPLogoutCommand : IMAPSingleCommand
{
}

- (long long)maxAllowedConnectionState;	// IMP=0x000000000000fafc
- (long long)minRequiredConnectionState;	// IMP=0x000000000000faf1
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x000000000000fad6
- (id)activityString;	// IMP=0x000000000000fa6a
- (id)commandTypeString;	// IMP=0x000000000000fa4b

@end
