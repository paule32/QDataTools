# ------------------------------------------------------------------------------
# MIT License
#
# Copyright (c) 2020 Jens Kallup
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
# ------------------------------------------------------------------------------
win32:SUPPORT = no      # we don't support windows 32-Bit
win64:SUPPORT = no      # we don't support windows 64-Bit
linux:SUPPORT = $$system(uname -s) # ...
!contains(SUPPORT,[lL]inux): error("We only support Linux version of this Project")
#
isEmpty(QTDIR): QTDIR = $$system(echo $QTDIR)
isEmpty(QTDIR): error("The Compilation for this Project need the QTDIR path.")

TEMPLATE = subdirs
SUBDIRS  = plugins

# where to find the sub projects - give the folders
plugins.subdir = plugins
#run.subdir = run

# what sub project depends on others
#run.depends = dev
