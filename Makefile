
# To add your UIN, uncomment the below block and
# UIN:=123456789

#################
# GRADING SETUP #
#################

# GIT UPDATE AGENT
# Env variable settings
export REMOTE=updates
export REMOTE_URL="https://github.tamu.edu/alex-born/csce221-pa1-p1"

SRC:=./src

# Deliverable filename 
DELIVERABLE:=pa-test-deliverable-$(UIN).tgz

update:
	git-update-agent

setup-grading:
	planr build

grade:
	planr eval

deliverable:
ifndef UIN
	$(info You MUST provide your UIN via command line (make deliverable UIN=123456789) or in the Makefile)
	$(error UIN not set)
endif
	tar -czf $(DELIVERABLE) $(SRC)
	@echo The following files have been added to the deliverable:
	tar --list -f $(DELIVERABLE)

.PHONY: update setup-grading grade deliverable
