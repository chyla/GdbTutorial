# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|
  config.vm.box = "ubuntu/xenial64"

  config.vm.provider "virtualbox" do |vb|
    vb.memory = "512"
    vb.cpus = 4
  end

  config.vm.provision "shell", inline: <<-SHELL
    set -v

    export DEBIAN_FRONTEND=noninteractive

    apt-get update
    apt-get upgrade -y
 
    apt-get install -y make gdb g++  

    SHELL
end
